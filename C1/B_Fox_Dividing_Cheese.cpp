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

map<int, int> bfs(int n)
{
    map<int, int> vis;
    map<int, int> dis;
    vis[n] = 1;
    dis[n] = 0;
    queue<int> que;
    que.push(n);
    vi nums = {2, 3, 5};
    while (!que.empty())
    {
        int cur = que.front();
        que.pop();
        rep(i, 0, 3)
        {
            if (cur % nums[i]  == 0 and vis[cur / nums[i]] == 0)
            {
                vis[cur / nums[i]] = 1;
                dis[cur / nums[i]] = dis[cur] + 1;
                que.push(cur / nums[i]);
            }
        }
    }
    return dis;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    map<int, int> m1 = bfs(a);
    map<int, int> m2 = bfs(b);
    int ans = 1e9;
    for (auto it : m1)
    {
        int num = it.x;
        int dis = it.y;
        if (m2.find(num) != m2.end())
        {
            ans = min(ans, dis + m2[num]);
        }
    }
    if (ans == 1e9)
        cout << -1 << endl;
    else
        cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt = 1;
    // cin>>t;
    while (tt--)
    {
        solve();
    }
    return 0;
}
 