
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
    vi a[200001];
    int n;
    cin >> n;
    rep(i, 0, n)
    {
        int num;
        cin >> num;
        a[num].pb(i + 1);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        if (a[x].size() > 0)
        {
            int le = lower_bound(all(a[x]), l) - begin(a[x]);
            if (le <= r)
            {
                int ri = lower_bound(all(a[x]), r) - begin(a[x]);
                if (ri == a[x].size() or a[x][ri] > r)
                    ri--;
                cout << ri - le + 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            cout << 0 << endl;
        }
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

