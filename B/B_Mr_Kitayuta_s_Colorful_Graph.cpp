/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int bfs(int a, int b, vector<vector<pair<int, int>>> &g, int n)
{
    queue<pair<int, pair<int, vector<bool>>>> que;
    vector<bool> vis(n + 1, false);
    vis[a] = true;
    que.push(make_pair(a, make_pair(-1, vis)));
    vis[a] = true;
    map<int, int> ans;
    while (!que.empty())
    {
        pair<int, pair<int, vector<bool>>> cur = que.front();
        que.pop();

        if (cur.first == b)
        {
            ans[cur.second.first]++;
            continue;
        }

        for (int i = 0; i < g[cur.first].size(); i++)
        {
            pair<int, int> nei = g[cur.first][i];
            vector<bool> temp_vis = cur.second.second;
            if (!temp_vis[nei.first] and (cur.second.first == -1 or (cur.second.first == nei.second)))
            {
                temp_vis[nei.first] = true;
                que.push(make_pair(nei.first, make_pair(nei.second, temp_vis)));
            }
        }
    }
    return ans.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, q;
    cin >> n >> m;
    vector<vector<pair<int, int>>> g(n + 1);
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        g[a].push_back(make_pair(b, c));
        g[b].push_back(make_pair(a, c));
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << bfs(a, b, g, n) << endl;
    }
    return 0;
}