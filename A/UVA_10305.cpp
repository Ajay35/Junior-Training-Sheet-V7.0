#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m;
    while (cin >> n >> m)
    {
        if (n == 0 and m == 0)
            break;
        vector<vector<int> > g(n + 1);
        vector<int> in(n + 1);
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            in[y]++;
        }

        queue<int> que;
        for (int i = 1; i <= n; i++)
        {
            if (in[i] == 0)
                que.push(i);
        }
        while (!que.empty())
        {
            int cur = que.front();
            cout << cur << " ";
            que.pop();
            for (int v : g[cur])
            {
                if (--in[v] == 0)
                {
                    que.push(v);
                }
            }
        }
        cout << endl;
    }
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