
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
    int n;
    string s;
    cin >> n;

    vi a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    cin >> s;
    reverse(a.begin(), a.end());
    reverse(s.begin(), s.end());
    vi dp(n);

    int sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int bit = s[i] - '0';
        if (bit)
        {
            // take 1 as it is or put 0 and take all next bits....
            dp[i] = max(dp[i] + a[i] + (i + 1 < n ? dp[i + 1]: 0), sum);
        }
        else
        {
            // we must take 0 as it is.
            if (i + 1 < n)
                dp[i] = dp[i + 1];
        }
        sum += a[i];
    }
    cout << dp[0] << endl;
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

