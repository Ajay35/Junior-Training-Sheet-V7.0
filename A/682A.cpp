#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> md(5);
    for (int i = 1; i <= m; i++)
        md[i % 5]++;
    long long ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int rem = 5 - (i % 5);
        ans += md[rem % 5];
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