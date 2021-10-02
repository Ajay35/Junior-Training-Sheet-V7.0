#include <bits/stdc++.h>

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool vis[21][21];
char l;

void fill_map(int x, int y, vector<string> &g, int m, int n)
{
    vis[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int newx = x + dx[i];
        int newy = y + dy[i];
        if (newy < 0)
            newy = n - 1;
        if (newy >= n)
            newy = 0;
        if (newx >= 0 and newx < m and g[newx][newy] == l and !vis[newx][newy])
        {
            fill_map(newx, newy, g, m, n);
        }
    }
}

void dfs(int x, int y, vector<string> &g, int m, int n, int &ans)
{
    vis[x][y] = true;
    ans++;
    for (int i = 0; i < 4; i++)
    {
        int newx = x + dx[i];
        int newy = y + dy[i];
        if (newy < 0)
            newy = n - 1;
        if (newy >= n)
            newy = 0;
        if (newx >= 0 and newx < m and g[newx][newy] == l and !vis[newx][newy])
        {
            dfs(newx, newy, g, m, n, ans);
        }
    }
}

void solve()
{
    int m, n;
    while (cin >> m >> n)
    {
        memset(vis, false, sizeof vis);
        int x, y;
        vector<string> g(m);
        for (int i = 0; i < m; i++)
        {
            cin >> g[i];
        }
        cin >> x >> y;
        l = g[x][y];

        fill_map(x, y, g, m, n);

        int ans = 0;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (g[i][j] == l and !vis[i][j])
                {
                    int ans1 = 0;
                    dfs(i, j, g, m, n, ans1);
                    ans = max(ans, ans1);
                }
            }
        }
        cout << ans << endl;
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