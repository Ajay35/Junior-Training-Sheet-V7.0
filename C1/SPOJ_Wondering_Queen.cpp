
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

int dx[8] = {1,0,-1,0,1,1,-1,-1};
int dy[8] = {0,1,0,-1,1,-1,1,-1};

int bfs(vector<string>& board, pii st, pii en, int n, int m)
{
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    queue<pair<int, pii>> que;
    que.push({0, st});
    vis[st.x][st.y] = true;
    
    while(!que.empty())
    {
        pair<int, pii> cur = que.front();
        que.pop();
        if(cur.y.x == en.x and cur.y.y == en.y)
        {
            return cur.x;
        }
        rep(i, 0, 8)
        {
            int nx = cur.y.x + dx[i];
            int ny = cur.y.y + dy[i];
            if(nx >=0 and nx <n and ny >= 0 and ny < m and !vis[nx][ny] and board[nx][ny] != 'X')
            {
                que.push({cur.x + 1, {nx, ny}}); 
                vis[nx][ny] = true;
            }
        }
    }
    return 1e9;
}

void solve()
{
    int n, m;
    cin>>n>>m;
    pii st, en;
    vector<string> board(n);
    rep(i, 0, n)
    {
        cin>>board[i];
        rep(j, 0, m)
        {
            if(board[i][j] == 'S')
                st = {i, j};
            if(board[i][j] == 'F')
                en = {i, j};
        }
    }
    int max_dis = bfs(board, st, en, n, m);
    if(max_dis == 1e9)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<max_dis<<endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}

