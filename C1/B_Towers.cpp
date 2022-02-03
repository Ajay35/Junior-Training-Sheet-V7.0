
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
    int n, k, m = 0;
    cin >> n >> k;
    vi a(n);

    set<pii> towers;
    rep(i, 0, n)
    {
        int x;
        cin >> x;
        towers.insert({x, i + 1});
    }
    int d = (*towers.rbegin()).x - (*towers.begin()).x;
    vii ans;
    while (k > 0)
    {
        auto it1 = towers.begin();
        auto it2 = towers.end();
        it2--;
        int ind1 = (*it1).y;
        int ind2 = (*it2).y;
        int val1 = (*it1).x;
        int val2 = (*it2).x;
        if (val1 < val2 and abs((val2 - 1) - (val1 + 1)) <= d)
        {
            towers.erase(towers.find({val1, ind1}));
            towers.erase(towers.find({val2, ind2}));
            towers.insert({val1 + 1, ind1});
            towers.insert({val2 - 1, ind2});
            ans.pb({ind2, ind1});
            d = abs((val2 - 1) - (val1 + 1));
            m++;
            k--;
        }
        else
            break;
    }
    auto it1 = towers.begin();
    auto it2 = towers.rbegin();
    cout << (*it2).x - (*it1).x << " " << m << endl;
    rep(i, 0, sz(ans))
    {
        cout << ans[i].x << " " << ans[i].y << endl;
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

