
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
#define hell        1000000007
#define endl        '\n'
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;

vi a;
int n, k;
bool dp[10001][101];

bool divisible(int i, int r)
{
    if(i >= n)
        return r % k == 0;
    if(dp[i][r])
        return true;

    return dp[i][r % k] = divisible(i + 1, (r + a[i]) % k) or divisible(i + 1, (r - a[i]) % k);
}

void solve()
{
	cin>>n>>k;
    a.resize(n);
    rep(i, 0, n)
    {
        cin>>a[i];
    }
    memset(dp, false, sizeof(dp));
    if(divisible(1, a[0]))
        cout<<"Divisible"<<endl;
    else
        cout<<"Not divisible"<<endl;

    a.clear();
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}

