
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
    ll n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    ll ones = count(all(s), '1');
    ll den = n * n;
    vector<ll> a(n);
    a[0] = (s[0] == '1');
    rep(i, 1, n)
    {
        a[i] = a[i - 1];
        if (s[i] == '1')
            a[i]++;
    }
    ll num = 0;
    rep(i, 0, n)
    {
        if (s[i] == '1')
        {
            int ind = min(i + k, n - 1);
            ll count_ones = a[ind] - (i > 0 ? a[i - 1] : 0);
            num += (2 * (count_ones - 1) + 1);
        }
    }

    if (num == 0)
    {
        cout << 0 << "/" << 1 << endl;
    }
    else
    {
        ll g = gcd(num, den);
        cout << (num / g) << "/" << (den / g) << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

