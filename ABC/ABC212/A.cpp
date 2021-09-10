#include <bits/stdc++.h>

using namespace std;
 
void solve()
{
    string s;
    cin>>s;
    if(s[0] == s[1] and s[1] == s[2] ans s[2]== s[3])
    {
        cout<<"Weak"<<endl;
        return;
    }
    int cnt = 0;
    for(int i = 0; i < 2; i++)
    {
        int s1 = s[i] - '0';
        int s2 = s[i + 1] - '0';
        if((s1 + 1) % 10 == s2  or (s2 + 1) % 10 == s1)
            cnt++;
    }
    if(cnt == 3)
        cout<<"Weak"<<endl;
    else
        cout<<"Strong"<<endl;
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