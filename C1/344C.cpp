
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

void solve()
{
    ll a, b;
    cin >> a >> b;

    if (a == 1 and b == 1)
    {
        cout << 1 << endl;
        return;
    }
    long long step = 0;

    while (a > 0 and b > 0 and a % b != 0)
    {
        if (a > b)
        {
            long long d = a / b;
            a -= (b * d);
            step += d;
        }
        else
        {
            long long d = b / a;
            b -= (a * d);
            step += d;
        }
    }

    if (a > 1)
        step += a;
    cout << step << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}

