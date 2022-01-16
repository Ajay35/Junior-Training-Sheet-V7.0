/*#pragma GCC optimize("Ofast")
#pragma GCC optimization("unroll-loops, no-stack-protector")
#pragma GCC target("avx,avx2,fma")*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
#define fff(i, a, b) for (ll i = a; i <= b; i++)

mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

const ll maxn = 1e4 + 4;
const ll mod = 998244353;
const ll base = 3e18;

/// you will be the best but now you just are trash
/// goal 5/7

ll a[10];
ll m;
pll dp[maxn][(1ll << 10)][2][2];
ll b[maxn];
ll mu[maxn][10];
ll pos[10];

pll f(ll id, ll msk, ll e, ll st)
{
    if (id == 0)
    {
        if (msk == (1ll << m) - 1)
            return make_pair(0, 1);
        else
            return make_pair(0, 0);
    }
    if (dp[id][msk][e][st].ff != -1)
        return dp[id][msk][e][st];
    pll ans = make_pair(0, 0);
    for (int i = 0; i <= 9; i++)
    {
        if (i <= b[id] || e)
        {
            auto p = f(id - 1, (((pos[i] == -1) || (!st && i == 0)) ? msk : msk | (1ll << pos[i])), e | (i < b[id]), st | (i != 0));
            ans.ff = (ans.ff + p.ff + p.ss * mu[id][i]) % mod;
            ans.ss = (ans.ss + p.ss) % mod;
            /*if (id==100)
       {
           cout <<ans.ff<<" "<<ans.ss<<" "<<p.ff<<" "<<p.ss<<" "<<mu[id][i]<<" "<<id<<" "<<i<<" "<<(((pos[i]==-1)||(!st&&i==0))?msk:msk|(1ll<<pos[i]))<<" "<<pos[i]<<" "<<i<<" chk"<<endl;
       }*/
        }
    }
    return dp[id][msk][e][st] = ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if (fopen("t.inp", "r"))
    {
        freopen("test.inp", "r", stdin);
        freopen("test.out", "w", stdout);
    }
    mu[1][1] = 1;
    for (int i = 2; i < maxn; i++)
    {
        mu[i][1] = (mu[i - 1][1] * 10) % mod;
    }
    for (ll t = 2; t <= 9; t++)
    {
        for (int i = 1; i < maxn; i++)
        {
            mu[i][t] = (mu[i][1] * t) % mod;
        }
    }
    for (int i = 0; i < maxn; i++)
    {
        for (int j = 0; j < (1ll << 10); j++)
        {
            for (int t = 0; t <= 1; t++)
            {
                for (int p = 0; p <= 1; p++)
                {
                    dp[i][j][t][p] = make_pair(-1, -1);
                }
            }
        }
    }
    string s;
    cin >> s;
    ll n = s.length();
    reverse(s.begin(), s.end());
    s = " " + s;
    for (int i = 1; i <= n; i++)
    {
        b[i] = (s[i] - '0');
    }
    cin >> m;
    for (int j = 0; j <= 9; j++)
        pos[j] = -1;
    for (int j = 0; j < m; j++)
    {
        ll x;
        cin >> x;
        pos[x] = j;
    }
    //  cout <<n<<" "<<s<<endl;
    auto p = f(n, 0, 0, 0);
    cout << p.ff << endl;
}
