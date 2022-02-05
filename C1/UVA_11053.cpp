
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

ll n, a, b;

ll f(ll x)
{
    return (a * (x * x % n) + b) % n;
}

void solve()
{
    while (cin >> n)
    {
        if (n == 0)
            break;
        cin >> a >> b;
        ll x0 = 0;
        ll tortoise = f(x0);
        ll hare = f(f(x0));
        while (tortoise != hare)
        {
            tortoise = f(tortoise);
            hare = f(f(hare));
        }

        ll mu = 0;
        tortoise = x0;
        while (tortoise != hare)
        {
            tortoise = f(tortoise);
            hare = f(hare);
            mu += 1;
        }
        ll lam = 1;
        hare = f(tortoise);
        while (tortoise != hare)
        {
            hare = f(hare);
            lam += 1;
        }


        cout << n - lam << endl;
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

