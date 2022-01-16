/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > x;
bool vis[105];
long long ans = 1;

void dfs(int u, long long pa)
{
    if (u != pa)
    {
        ans *= 2;
    }
    vis[u] = 1;
    for (int i = 0; i < x[u].size(); i++)
    {
        int v = x[u][i];
        if (!vis[v])
        {
            dfs(v, pa);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    x.resize(n + 5);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        x[a].push_back(b);
        x[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i, i);
        }
    }

    cout << ans << endl;

    return 0;
}