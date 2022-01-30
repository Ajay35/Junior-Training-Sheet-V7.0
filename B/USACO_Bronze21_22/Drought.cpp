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
 
bool check(vector<int>& cows, int x)
{
    int n = cows.size();
    vector<int> req = cows;
    for(int i = 0; i < n; i++)
    {
        if(req[i] > x and i + 1 < n and req[i + 1] > x)
        {
            req[i] = x;
            req[i + 1] = req[i + 1] - cows[i] + x;
            if(req[i + 1] < x)
                return false;
        }
    }
}

void solve()
{
    int n;
    cin>>n;
    vector<int> cows(n);
    int min_hunger = INT_MAX;
    long long ans = 1e18;
    for(int i = 0; i < n; i++)
    {
        cin>>cows[i];
        min_hunger = min(min_hunger, cows[i]);
    }   
    for(int i = 0; i < min_hunger; i++)
    {
        int cur_hunger = i;
        if(check(cows, cur_hunger))
        {
            long long ans1 = 0;
            for(int j = 0; j < n; j++)
            {
                ans1 += (cows[j] - cur_hunger);
            }
            ans = min(ans, ans1);
        }
    }
    if(ans == 1e18)
        cout<<-1<<endl;
    else
        cout<<ans<<endl;
}
 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}