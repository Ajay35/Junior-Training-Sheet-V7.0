
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


void solve()
{
    vector<ll> tens(19);
    tens[0] = 1;
    tens[1] = 10;
    rep(i, 2, 19)
    {
        tens[i] = 10 * tens[i - 1];
    }

    ll p, d;
    cin >> p >> d;
    int pw = 0;

    while (d > 0 and pw + 1 <= 18 and tens[pw + 1] <= p)
    {
        int dig = (p / tens[pw]) % 10;
        if (dig != 9)
        {
            int dis = dig + 1;
            if (dis * tens[pw] <= d)
            {
                d -= (dis * tens[pw]);
                p -= (dis * tens[pw]);
            }
            else
            {
                break;
            }
        }
        pw++;
    }
    cout << p << endl;
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

