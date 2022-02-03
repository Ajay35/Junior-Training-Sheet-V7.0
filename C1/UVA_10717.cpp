
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


ll get_lcm(vector<ll>& a)
{

    ll lcm = a[0];
    rep(i, 1, sz(a))
    {
        lcm = (((a[i] * lcm)) / (__gcd(a[i], lcm)));
    }
    return lcm;
}

void solve()
{
    int n, t;
    while (cin >> n >> t)
    {
        if (n == 0 and t == 0)
            break;
        vector<ll> coins(n);
        vector<ll> tables(t);
        rep(i, 0, n)
        {
            cin >> coins[i];
        }
        rep(i, 0, t)
        {
            cin >> tables[i];
        }
        // check all sets of coins where each set has 4 distinct coins.
        // nested loop 4 levels.
        vector<pair<ll, ll>> ans(t);
        rep(i, 0, t)
        {
            ans[i].x = -1;
            ans[i].y = 1e12;
        }

        rep(p, 0, n)
        {
            rep(q, p + 1, n)
            {
                rep(r, q + 1, n)
                {
                    rep(s, r + 1, n)
                    {
                        // check lcm of 4 coins.
                        vector<ll> temp = {coins[p], coins[q], coins[r], coins[s]};
                        ll lcm = get_lcm(temp);
                        rep(i, 0, t)
                        {
                            ll smallest = -1, largest = 1e12;
                            ll sm = (tables[i] / lcm) * lcm;
                            ll lr = ((tables[i] / lcm) + ((tables[i] % lcm) > 0)) * lcm;

                            if (sm <= tables[i])
                                ans[i].x = max(ans[i].x, sm);
                            if (lr >= tables[i])
                                ans[i].y = min(ans[i]. y, lr);
                        }
                    }
                }
            }
        }
        rep(i, 0, t)
        {
            cout << ans[i].x << " " << ans[i].y << endl;
        }
    }
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

