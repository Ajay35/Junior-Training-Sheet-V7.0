
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

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll lim = 1000000 * max(a, b);
    ll a_count = lim / a;
    ll b_count = lim / b;

    if (a > b)
    {
        b_count -= (lim / ((a * b) / gcd(a, b)));
    }
    else
    {
        a_count -= (lim / ((a * b) / gcd(a, b)));
    }
    if (a_count > b_count)
    {
        cout << "Dasha" << endl;
    }
    else if (a_count < b_count)
    {
        cout << "Masha" << endl;
    }
    else
    {
        cout << "Equal" << endl;
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

