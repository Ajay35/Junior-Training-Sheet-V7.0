
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

const int maxN = 1001;
int n, c[maxN];

void f(int x) 
{
    ll res = 0, xx = 1;
    for (int i = n - 1; i >= 0; i--) 
    {
        res += c[i] * xx;
        xx *= x;
    }
    cout<<res;
}

void solve()
{
    int len, k, x;
    char s[maxN];
    while (gets(s)) 
    {
        len = strlen(s), k = 0;
        n = 0;
        while (k < len) 
        {
            while (k < len && s[k] == ' ') k++;
            if (k < len) 
            {
                sscanf(s + k, "%d", &c[n++]);
                while (k < len && s[k] != ' ') k++;
            }
        }

        gets(s);
        len = strlen(s), k = 0;
        bool space = false;
        while (k < len) 
        {
            while (k < len && s[k] == ' ') k++;
            if (k < len) 
            {
                sscanf(s + k, "%d", &x);
                if (space) printf(" "); space = true;
                f(x);
                while (k < len && s[k] != ' ') k++;
            }
        }
        cout<<endl;
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

