#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    int pos = 0;
    for (int i = 0; i < s2.size(); i++)
    {
        if (s1[pos] == s2[i])
        {
            pos++;
        }
    }
    cout << pos + 1 << endl;
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