
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


ll dp[31][31];

void solve()
{
    ll ans = 0;
    int n, m, t;
    cin >> n >> m >> t;
    ll dp[31][31];
    int i, j;

    rep(i, 0, 31)
    {
        rep(j, 0, i + 1)
        {
            if (j == 0 || j == i)
                dp[i][j] = 1;
            else
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }

    rep(i, 4, t)
    {
        if (i > n)
            continue;
        if (t - i > m)
            continue;
        ans += (dp[n][i] * dp[m][t - i]);
    }
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

