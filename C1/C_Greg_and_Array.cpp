
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

struct query
{
    int x, y;
    ll val;
};

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    vi ops(m);
    vector<query> b(m);
    rep(i, 0, m)
    {
        cin >> b[i].x >> b[i].y >> b[i].val;
    }
    rep(i, 0, k)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        ops[x]++;
        if (y + 1 < m)
            ops[y + 1] -= 1;
    }

    rep(i, 1, m)
    {
        ops[i] += ops[i - 1];
    }
    vector<ll> temp(n);
    rep(i, 0, m)
    {
        int l = b[i].x;
        int r = b[i].y;
        l--;
        r--;
        ll val = b[i].val * (1ll) * ops[i];
        temp[l] += val;
        if (r + 1 < n)
            temp[r + 1] -= val;
    }
    rep(i, 1, n)
    {
        temp[i] += temp[i - 1];
    }
    rep(i, 0, n)
    {
        cout << a[i] + temp[i] << " ";
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

