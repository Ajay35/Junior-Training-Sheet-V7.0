#include <bits/stdc++.h>

using namespace std;
 
void solve()
{
    int n, m;
    vector<vector<long long> > dp(101, vector<long long>(101));

    dp[0][0] = 1;

    for(int i = 1; i < 101; i++) 
    {
        dp[i][0] = 1; 

        for(int j = 1; j <= i; j++) 
        {
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }
    while(cin>>n>>m)
    {
        if(n == 0 and m == 0)
            break;
        cout<<n<<" things taken "<<m<<" at a time is "<<dp[n][m]<<" exactly."<<endl;
    }
}
 
signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   int t=1;
   //cin>>t;
   while(t--){
      solve();
   }
   return 0;
}