
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
    ll hc, dc, hm, dm, k, w, a;
    cin >> hc >> dc >> hm >> dm;
    cin >> k >> w >> a;

    for(int i = 0; i <= k; i++)
    {
        // spend i on armor and k - i on health
        long long n_hc = hc + (i * a);
        long long n_dc = dc + (w*(k - i));
        long long cc_hits = (hm / n_dc) + ((hm % n_dc) > 0);
        long long mm_hits = (n_hc / dm) + ((n_hc % dm) > 0);
        if(cc_hits <= mm_hits)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

