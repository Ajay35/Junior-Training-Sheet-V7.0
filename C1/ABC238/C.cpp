
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

void solve()
{
    ll n;
    cin>>n;
    string num = to_string(n);
    int len = sz(num);
    vi a, b;
    a.pb(0);
    a.pb(0);
    b.pb(0);
    b.pb(9);
    for(int i = 2; i <= len; i++)
    {
        b.pb(b.back() * 10);
        b[i] += b[i - 1];
        b[i] = b[i] % hell;
    }
    for(int i = 2; i <=len; i++)
    {
        a.pb(a.back() * 10 + 9);
        a[i] += a[i - 1];
        a[i] = a[i] % hell;
    }
    ll ans = 0;
    for(int i = 1; i <= len; i++)
    {

        if(i == len)
        {
            cout<<i<<" a:"<<" "<<n-a[i - 1]<<endl;
            ans += (n - a[i]);
            ans = ans % hell;
        }
        else
        {
            cout<<i<<" b:"<<" "<<b[i]<<endl;
            ans += (b[i]);
            ans = ans % hell;
        }
    }
    cout<<ans<<endl;
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

