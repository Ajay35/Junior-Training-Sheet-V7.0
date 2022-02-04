
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
    double n;

    double c = 1;
    vector<double> cubes;
    while (c * c * c <= 1000000)
    {
        cubes.pb(c * c * c);
        c++;
    }
    while (cin >> n)
    {
        if (n == 0)
            break;
        auto it  = upper_bound(all(cubes), n);
        it--;
        int ind  = it - cubes.begin();
        double ans = (n - cubes[ind]) / (3 * (ind + 1) *  (ind + 1));
        cout << fixed << setprecision(4) << (ind + 1) + ans << endl;
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

