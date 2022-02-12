
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

struct match
{
    int l, r, x;
};

void solve()
{
    int n, m;
    cin >> n >> m;
    set<int> alive;
    vi ans(n, -1);
    rep(i, 0, n)
    {
        alive.insert(i);
    }

    for (int i = 0; i < m; i++)
    {
        int l, r, x;
        cin >> l >> r >> x;
        l--, r--, x--;
        set<int>::iterator it = alive.lower_bound(l);
        vi toErase;
        while (it != alive.end())
        {
            int cur = *it;
            if (cur > r)
                break;
            if (cur != x)
            {
                toErase.pb(cur);
                ans[cur] = x;
            }
            it++;
        }

        for (int j = 0; j < sz(toErase); j++)
        {
            alive.erase(toErase[j]);
        }
    }
    rep(i, 0, n)
    {
        cout << ans[i] + 1 << " ";
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

