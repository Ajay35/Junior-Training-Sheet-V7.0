#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int median = (n / 2) - (n % 2 == 0);
    vector<char> ans(n);
    ans[median] = s[0];
    int l = median - 1;
    int r = median + 1;
    bool le = (n % 2 == 1);
    bool ri = (n % 2 == 0);
    for (int i = 1; i < n; i++)
    {
        if (le)
        {
            ans[l--] = s[i];
            le = !le;
            ri = !ri;
        }
        else
        {
            ans[r++] = s[i];
            le = !le;
            ri = !ri;
        }
    }

    for (int i = 0; i < n; i++)
        cout << ans[i];
    cout << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}