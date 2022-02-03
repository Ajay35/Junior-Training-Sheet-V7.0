
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
#define hell        (ll) 2000000011
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;

ll power(ll x, ll y)
{
    ll res = 1;
    while (y > 0)
    {
        if (y & 1)
        {
            res = (res * x) % hell;
        }
        x = (x * x) % hell;
        y = y >> 1;
    }
    return res;
}

void solve(int c)
{
    int n;
    cin >> n;
    if (n <= 2)
        cout << "Case #" << c << ": " << 1 << endl;
    else
        cout << "Case #" << c << ": " << power(n, n - 2) << endl;
}



signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    int c = 1;
    while (t--)
    {
        solve(c);
        c++;
    }
    return 0;
}

