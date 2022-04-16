
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
#define hell        998244353
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;

ll m;
ll dp[51][2501];

ll f(int n, int k)
{
    if (k < 0)
        return 0;
    if (n == 0)
        return k >= 0;
    if (dp[n][k] != -1)
        return dp[n][k];
    ll& ans = dp[n][k];
    ans = 0;
    for (int i = 1; i <= m; i++)
    {
        ans += f(n - 1, k - i) % hell;;
    }
    return ans % hell;
}

void solve()
{
    int n, k;
    cin >> n >> m >> k;
    memset(dp, -1, sizeof dp);
    cout << f(n, k) << endl;
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

