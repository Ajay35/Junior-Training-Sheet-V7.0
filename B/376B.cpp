#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> inc(n + 1), out(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v, x;
        cin >> u >> v >> x;
        inc[v] += x;
        out[u] += x;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (inc[i] >= out[i])
        {
            ans += inc[i] - out[i];
        }
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