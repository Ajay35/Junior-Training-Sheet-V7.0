#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int cur = 0, ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int dis1, dis2;
        int c = s[i] - 'a';
        dis1 = ((cur - c) + 26) % 26;
        dis2 = ((c - cur) + 26) % 26;
        ans += min(dis1, dis2);
        cur = c;
    }
    cout << ans << endl;
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