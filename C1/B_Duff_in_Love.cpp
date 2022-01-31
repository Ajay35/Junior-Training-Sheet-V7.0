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

bool is_lovely(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % (i * i) == 0)
        {
            return false;
        }
    }
    return true;
}


void solve()
{
    ll n;
    cin >> n;
    vector<ll> factors;



    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                factors.pb(i);
            }
            else
            {
                factors.pb(i);
                factors.pb(n / i);
            }
        }
    }
    sort(all(factors));
    for (int i = factors.size() - 1; i >= 0; i--)
    {
        // check if i is lovely
        if (is_lovely(factors[i]))
        {
            cout << factors[i] << endl;
            return;
        }
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