
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

const int N = 1000;
int dp[N + 1];

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> b(n), c(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) 
    {
        cin >> c[i];
    }

    k = min(k, 12 * n);

    vi f(k + 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = k; j >= dp[b[i]]; j--)
        {
            f[j] = max(f[j], f[j - dp[b[i]]] + c[i]);
        }
    }

    std::cout << f[k] << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    fill(dp, dp + N + 1, 1e9);
    dp[1] = 0;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i + i / j <= N)
            {
                dp[i + i / j] = min(dp[i + i / j], dp[i] + 1);
            }
        }
    }

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

