#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(vector<vector<char> > &mat, vector<vector<bool> > &vis, int i, int j, int n)
{
    mat[i][j] = '@';
    vis[i][j] = true;
    for (int k = 0; k < 4; k++)
    {
        int newi = i + dx[k];
        int newj = j + dy[k];
        if (newi >= 0 and newi < n and newj >= 0 and newj < n and !vis[newi][newj] and mat[newi][newj] != '.')
            dfs(mat, vis, newi, newj, n);
    }
}
void solve(int t)
{
    int n;
    cin >> n;
    vector<vector<char> > mat(n, vector<char>(n));
    vector<vector<bool> > vis(n, vector<bool>(n, false));
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = s[j];
        }
    }
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 'x')
            {
                dfs(mat, vis, i, j, n);
                ans++;
            }
        }
    }
    cout << "Case " << t++ << ": " << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
    return 0;
}