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
    int h, w;
    cin>>h>>w;
    vector<vector<int>> a(h, vector<int>(w));
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            cin>>a[i][j];
        }
    }
    vector<vector<int>> b(w, vector<int>(h));
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    for(int i = 0; i < w; i++)
    {
        for(int j = 0; j < h; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}
 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}