
/* Ajay Jadhav */

#include <bits/stdc++.h>

#define ll          long long
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
#define vii         vector<pii>
#define mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define endl        '\n'
#define hell        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> bm(n);
    vector<vi> dis(n, vi(m, 1e9));
    vector<vector<bool>> vis(n, vector<bool>(m, false));

    rep(i, 0, n)
    {
        cin >> bm[i];
    }
    queue<pii> que;

    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            if (bm[i][j] == '1')
            {
                dis[i][j] = 0;
                que.push({i, j});
            }
        }
    }

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    while (!que.empty())
    {
        pii cur = que.front();
        que.pop();
        vis[cur.x][cur.y] = true;
        rep(i, 0, 4)
        {
            int nx = cur.x + dx[i];
            int ny = cur.y + dy[i];
            if (nx >= 0 and nx < n and ny >= 0 and ny < m and !vis[nx][ny] and dis[nx][ny] > dis[cur.x][cur.y] + 1)
            {
                que.push({nx, ny});
                dis[nx][ny] = dis[cur.x][cur.y] + 1;
            }
        }
    }
    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            cout << dis[i][j] << " ";
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

