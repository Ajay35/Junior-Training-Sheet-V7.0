
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


ll a, s;

bool f(int i, int c)
{
    if(i >= 60)
    {
        return 1;
    }
    bool ans = false;

    if((a & (1ll << i)))
    {
        // a  =1, s = 0
        if(!(s & (1ll << i)))
        {
            if(c != 0)
                return false;
            ans = ans or f(i + 1, 1);
        }
        else
        {
            // s = 1,  the c == 1
            if(c == 0)
                return false;
            ans = ans or f(i + 1, 0);
        }
        
    }
    else
    {
        // a = 0, s = 0
        if(!(s & (1ll << i)))
        {
            ans = ans or f(i + 1, 1);
            ans = ans or f(i + 1, 0);
        }
        else
        {
            // s = 1,  the c == 1
            if(c == 0)
                return false;
            ans = ans or f(i + 1, 1);
        }
    }
}


void solve()
{
    cin>>a>>s;
    cout<<f(0, 0);
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

