#include <bits/stdc++.h>

using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        b[a[i] - 1] = i + 1;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
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