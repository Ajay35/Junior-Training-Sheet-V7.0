#include <bits/stdc++.h>
using namespace std;


vector<vector<int> > graph;
bool vis[105] = {0};

int dfs(int cur, int par, int &cnt)
{
    if (vis[cur])
        return 1;
    vis[cur] = 1;
    for (int child : graph[cur])
    {
        if (child != par)
        {
            cnt++;
            if (dfs(child, cur, cnt))
                return 1;
        }
    }
    return 0;
}

int main()
{
    int n, m, x, y;
    cin >> n >> m;
    graph = vector<vector<int> >(n);
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        x--;
        y--;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int toremove = 0;

    for (int i = 0; i < n; i++)
        if (!vis[i])
        {
            int cnt = 0;
            int ans = dfs(i, -1, cnt);
            if (ans)
                toremove += (cnt % 2 == 1);
        }
    if ((n - toremove) % 2 == 1)
        toremove++;
    cout << toremove << endl;
}