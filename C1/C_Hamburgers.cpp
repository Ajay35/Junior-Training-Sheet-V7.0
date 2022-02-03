
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

bool check(vector<ll>& available, vector<ll>& price, vector<ll>& req, ll r, ll x)
{
    vector<ll> req_x = {req[0] * x, req[1] * x, req[2] * x};
    rep(i, 0, 3)
    {
        req_x[i] = max(0ll, req_x[i] - available[i]);
    }
    rep(i, 0, 3)
    {
        if (req_x[i] <= r and r >= (price[i] * req_x[i]))
            r -= (price[i] * req_x[i]);
        else
            return false;
    }
    return r >= 0;
}

void solve()
{
    string burger;
    cin >> burger;
    vector<ll> available(3);
    vector<ll> price(3);
    vector<ll> req(3);
    ll r;
    cin >> available[0] >> available[1] >> available[2];
    cin >> price[0] >> price[1] >> price[2];
    cin >> r;

    req[0] = count(all(burger), 'B');
    req[1] = count(all(burger), 'S');
    req[2] = count(all(burger), 'C');

    ll le = 0, ri = 1e13;
    ll ans = 0;
    while (le <= ri)
    {
        ll mid = (le + ri) / 2;
        if (check(available, price, req, r, mid))
        {
            ans = max(ans, mid);
            le = mid + 1;
        }
        else
        {
            ri = mid - 1;
        }
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

