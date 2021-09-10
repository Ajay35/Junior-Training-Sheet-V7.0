#include <bits/stdc++.h>
using namespace std;

int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

void dfs(vector<vector<int> > &m, int i, int j, int n)
{
    m[i][j] = 0;
    for (int k = 0; k < 8; k++)
    {
        int newi = i + dx[k];
        int newj = j + dy[k];
        if (newi >= 0 and newi < n and newj >= 0 and newj < n and m[newi][newj])
            dfs(m, newi, newj, n);
    }
}
void solve()
{
    int n;
    int t = 1;
    while (cin >> n)
    {
        vector<vector<int> > m(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < n; j++)
            {
                m[i][j] = s[j] - '0';
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (m[i][j])
                {
                    dfs(m, i, j, n);
                    ans++;
                }
            }
        }
        cout << "Image number " << t++ << " contains " << ans << " war eagles." << endl;
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