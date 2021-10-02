#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int x = s.find("bear", i);
        if (x >= 0)
        {
            res += s.size() - x - 3;
        }
    }
    cout << res << '\n';
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