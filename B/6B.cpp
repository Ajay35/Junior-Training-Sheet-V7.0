#include <bits/stdc++.h>

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
char c;
void dfs(int i, int j, vector<string> &grid, int n, int m, set<char> &s)
{
    s.insert(grid[i][j]);
    if(grid[i][j] == c)
    {
        grid[i][j] = '.';
        for (int k = 0; k < 4; k++)
        {
            int newx = i + dx[k];
            int newy = j + dy[k];

            if (newx >= 0 and newx < n and newy >= 0 and newy < m and grid[newx][newy] != '.')
            {
                dfs(newx, newy, grid, n, m, s);
            }
        }
    }
}

void solve()
{
    int n, m;
    set<char> s;
    cin >> n >> m >> c;
    vector<string> grid(n);
    int sx = -1, sy = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
        for (int j = 0; j < m; j++)
        {
            if (sx == -1 and grid[i][j] == c)
            {
                sx = i;
                sy = j;
            }
        }
    }

    dfs(sx, sy, grid, n, m, s);
    cout << s.size() - 1 << endl;
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