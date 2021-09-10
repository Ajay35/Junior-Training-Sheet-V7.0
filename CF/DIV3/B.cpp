#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int ind = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
    {
        cout << "NO" << endl;
        return;
    }
    int sz = n - 1;
    int l = ind - 1;
    int r = ind + 1;
    for (char ch = 'b'; ch <= 'z' and sz > 0; ch++)
    {
        if (l >= 0 and s[l] == ch)
        {
            l--;
            sz--;
        }
        else if (r < n and s[r] == ch)
        {
            r++;
            sz--;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}