
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
    vi a(361);
    a[0] = 1;
    int n;
    cin>>n;
    int l = 0;
    rep(i, 0, n)
    {
        int x;
        cin>>x;
        if(l + x > 360)
        {
            int rem = x - (360 - l);
            a[rem] = 1;
            l = rem;  
        }
        else
        {
            a[l + x] = 1;
            l += x;
        }
    }
    vi ans;
    rep(i, 0, 361)
    {
        if(a[i])
        {
            ans.pb(i);
        }
    }
    int ret = 0;
    rep(i, 0, sz(ans) - 1)
    {
        int l = ans[i];
        int r = ans[i + 1];
        ret = max(ret, r - l);
    }
    ret = max(ret, 360 - ans.back() + ans.front());
    cout<<ret<<endl;



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

