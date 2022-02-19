
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

int ans;
vector<int> black;
vector<vector<int>> g;

void dfs(int u, int c, int bc, vector<int>& b)
{
    if(c == g.size() - 1)
    {
        if(c > ans)
        {
            black.clear();
            for(int i = 1; i <= n; i++)
            {
                if(b[i] == 1)
                {
                    
                }
            }
        }
    }
}

void solve()
{
    int n, m;
    cin>>n>>m;
    ans = 0;
    g.resize(n + 1);
    for(int i = 1; i <= m; i++)
    {
        int u, v;
        cin>>u>>v;
        g[u].pb(v);
        g[v].pb(u);
    }
    vector<int> b(n + 1);
    dfs(1, 0, 0, b);
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

