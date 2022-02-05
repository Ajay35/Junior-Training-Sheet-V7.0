
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

const int N = 1001;
bool vis[N][N][4];
int dis[N][N];
char board[N][N];

int n, m, sx, sy;


int bfs()
{
    queue<pii> que;
    rep(i, 0, n) rep(j, 0, m) rep(k, 0, 4) vis[i][j][k] = false;
    rep(i, 0, n) rep(j, 0, m) dis[i][j] = 1e9;
    que.push({sx, sy});
    dis[sx][sy] = 0;
    vis[sx][sy][0] = true;
    vis[sx][sy][1] = true;
    vis[sx][sy][2] = true;
    vis[sx][sy][3] = true;

    while (!que.empty())
    {
        pii cur = que.front();
        que.pop();

        int xx = cur.x;
        int yy = cur.y;

        // go up, 0
        for (int i = xx - 1; i >= 0; i--)
        {
            if (board[i][yy] == 'X' or vis[i][yy][0])
                break;
            dis[i][yy] = min(dis[i][yy], 1 + dis[xx][yy]);
            if (board[i][yy] == 'F')
                return dis[i][yy];
            vis[i][yy][0] = true;
            que.push({i, yy});


        }
        // go down, 0
        for (int i = xx + 1; i < n; i++)
        {
            if (board[i][yy] == 'X' or vis[i][yy][0])
                break;
            dis[i][yy] = min(dis[i][yy], 1 + dis[xx][yy]);
            if (board[i][yy] == 'F')
                return dis[i][yy];
            vis[i][yy][0] = true;
            que.push({i, yy});

        }
        // go left, 1
        for (int i = yy - 1; i >= 0; i--)
        {
            if (board[xx][i] == 'X' or vis[xx][i][1])
                break;
            dis[xx][i] = min(dis[xx][i], 1 + dis[xx][yy]);
            if (board[xx][i] == 'F')
                return dis[xx][i];
            vis[xx][i][1] = true;
            que.push({xx, i});

        }
        // go right, 1
        for (int i = yy + 1; i < m; i++)
        {
            if (board[xx][i] == 'X' or vis[xx][i][1])
                break;
            dis[xx][i] = min(dis[xx][i], 1 + dis[xx][yy]);
            if (board[xx][i] == 'F')
                return dis[xx][i];
            vis[xx][i][1] = true;
            que.push({xx, i});

        }
        // go up right, 2
        for (int i = xx - 1, j = yy + 1; i >= 0 and j < m; j++, i--)
        {
            if (board[i][j] == 'X' or vis[i][j][2])
                break;
            dis[i][j] = min(dis[i][j], 1 + dis[xx][yy]);
            if (board[i][j] == 'F')
                return dis[i][j];
            vis[i][j][2] = true;
            que.push({i, j});

        }
        // go up left, 3
        for (int i = xx - 1, j = yy - 1; i >= 0 and j >= 0; j--, i--)
        {
            if (board[i][j] == 'X' or vis[i][j][3])
                break;
            dis[i][j] = min(dis[i][j], 1 + dis[xx][yy]);
            if (board[i][j] == 'F')
                return dis[i][j];
            vis[i][j][3] = true;
            que.push({i, j});

        }

        // go down right, 3
        for (int i = xx + 1, j = yy + 1; i < n and j < m; j++, i++)
        {
            if (board[i][j] == 'X' or vis[i][j][3])
                break;
            dis[i][j] = min(dis[i][j], 1 + dis[xx][yy]);
            if (board[i][j] == 'F')
                return dis[i][j];
            vis[i][j][3] = true;
            que.push({i, j});

        }

        // go down left
        for (int i = xx + 1, j = yy - 1; i < n and j >= 0; j--, i++)
        {
            if (board[i][j] == 'X' or vis[i][j][2])
                break;
            dis[i][j] = min(dis[i][j], 1 + dis[xx][yy]);
            if (board[i][j] == 'F')
                return dis[i][j];
            vis[i][j][2] = true;
            que.push({i, j});

        }
    }
    return -1;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &n, &m);
        rep(i, 0, n)
        {
            scanf("%s", board[i]);
            rep(j, 0, m)
            if (board[i][j] == 'S')
                sx = i, sy = j;
        }
        int d = bfs();
        printf("%d\n", d);
    }
    return 0;
}

