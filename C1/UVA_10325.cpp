
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
#define hell        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;

const int N = 10000000;

ll get_divisors(ll n, vector<ll>& a)
{
    ll lcm = a[0];

    rep(i, 1, sz(a))
    {
        lcm = (((a[i] * lcm)) / (__gcd(a[i], lcm)));
    }
    return n / lcm;
}

void solve()
{
    ll n, m;
    while (cin >> n >> m)
    {
        vector<ll> a(m);
        rep(i, 0, m)
        {
            cin >> a[i];
        }
        vector<vector<ll>> subsets;
        rep(i, 0, (1 << m))
        {
            vector<ll> temp;
            rep(j, 0, m)
            {
                if (i & (1 << j))
                {
                    temp.pb(a[j]);
                }
            }
            if (sz(temp))
            {
                subsets.pb(temp);
            }
        }
        bool sign  = true;
        ll ans = 0;
        rep(i, 1, m + 1)
        {
            ll p = 0;
            for (int j = 0; j < sz(subsets); j++)
            {
                if (sz(subsets[j]) == i)
                {
                    p += get_divisors(n, subsets[j]);
                }
            }
            if (sign)
                ans += p;
            else
                ans -= p;
            sign = !sign;
        }
        cout << n - ans << endl;
    }
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

