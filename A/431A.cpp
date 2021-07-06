#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a[4];
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ans += a[s[i] - '0' - 1];
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