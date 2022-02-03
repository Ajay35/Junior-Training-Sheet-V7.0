
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
#define MOD        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;


ll prod(ll a, ll b, ll mod = MOD)
{
    ll res = 0;

    while (b)
    {
        if (b & 1)
            res = (res + a) % mod;
        a = (a + a) % mod;

        b >>= 1;
    }

    return res;
}

ll bpow(ll a, ll b, ll mod = MOD)
{
    ll res = 1;

    while (b)
    {
        if (b & 1)
            res = prod(res, a, mod);
        a = prod(a, a, mod);

        b >>= 1;
    }

    return res;
}

void solve()
{
    ll a, b, n;

    cin >> a >> b >> n;

    if (a == b)
    {
        cout << (bpow(a, n) + bpow(b, n)) % MOD << '\n';
    } else
    {
        ll d = (bpow(a, n, a - b) + bpow(b, n, a - b)) % (a - b);

        cout << __gcd(d, a - b) << '\n';
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
