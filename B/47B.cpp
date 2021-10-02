#include <bits/stdc++.h>

using namespace std;

vector<int> g[3];

bool cycle(int u, vector<bool> &vis, vector<bool> &rec)
{
    vis[u] = true;
    rec[u] = true;
    for (int v : g[u])
    {
        if (!vis[v] and cycle(v, vis, rec))
            return true;
        else if (rec[v])
            return true;
    }
    rec[u] = false;
    return false;
}

void solve()
{
    vector<int> in_deg(3, 0);
    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        if (s[1] == '>')
        {
            g[s[0] - 'A'].push_back(s[2] - 'A');
            in_deg[s[2] - 'A']++;
        }
        else
        {
            g[s[2] - 'A'].push_back(s[0] - 'A');
            in_deg[s[0] - 'A']++;
        }
    }
    vector<bool> vis(3, false);
    vector<bool> rec(3, false);

    if (!cycle(0, vis, rec))
    {
        queue<int> que;
        for (int i = 0; i < 3; i++)
        {
            if (in_deg[i] == 0)
                que.push(i);
        }
        string ans;
        while (!que.empty())
        {
            int cur = que.front();
            que.pop();
            ans += (cur + 'A');
            for (int v : g[cur])
            {
                if (--in_deg[v] == 0)
                {
                    que.push(v);
                }
            }
        }

        reverse(begin(ans), end(ans));
        cout << ans << endl;
    }
    else
    {
        cout << "Impossible" << endl;
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