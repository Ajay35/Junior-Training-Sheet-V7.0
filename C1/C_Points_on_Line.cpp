
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
    int n, d;
    long long ans = 0;
    cin >> n >> d;
    vi a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    rep(i, 0, n - 2)
    {
        auto ind = lower_bound(a.begin(), a.end(), a[i] + d);
        if (ind == a.end())
            ind--;
        if (*ind - a[i] > d)
            ind--;

        int index = ind - a.begin();
        index = index - i;
        ans += (index *(1ll)* (index - 1)) / 2;

    }
    cout << ans << endl;
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

