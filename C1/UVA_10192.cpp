
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

int dp[101][101];
string ss, tt;

int f(int i, int j)
{
    if (i == sz(ss) or j == sz(tt))
    {
        return 0;
    }
    int& ans = dp[i][j];

    if (ans != -1)
        return ans;
    else
        ans = 0;

    if (ss[i] == tt[j])
    {
        ans = 1 + f(i + 1, j + 1);
    }
    else
    {
        ans = max(f(i + 1, j), f(i, j + 1));
    }
    return ans;
}

void solve()
{
    int t = 1;

    while (getline(cin, ss), ss[0] != '#')
    {
        getline(cin, tt);
        memset(dp, -1, sizeof dp);

        cout << "Case #" << t++ << ": you can visit at most " << f(0, 0) << " cities.\n";
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

