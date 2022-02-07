
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

int n, m, ans = 0, tim = 1;
vector<vi> g;
vi cats, vis;
vi inc, out;

void dfs(int u, int p, int c)
{
    if (c > m)
        return;
    if (u != 1 and sz(g[u]) == 1)
    {
        ans++;
    }
    vis[u] = 1;

    for (int v : g[u])
    {
        if (v != p and cats[v] and c + cats[v] <= m)
        {
            dfs(v, u, c + cats[v]);
        }
        else if (v != p and cats[v] == 0)
        {
            dfs(v, u, 0);
        }
    }

}



void solve()
{
    cin >> n >> m;
    cats.resize(n + 1);
    g.resize(n + 1);
    vis.resize(n + 1);

    rep(i, 1, n + 1)
    {
        cin >> cats[i];
    }

    rep(i, 0, n - 1)
    {
        int x, y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }

    dfs(1, -1, cats[1]);

    cout << ans << endl;

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}

