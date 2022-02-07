
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
    int n, k;
    cin >> n >> k;
    if (n == 1)
    {
        if (k == 1)
        {
            cout << "YES" << endl;
            cout << 1 << endl;
            return;
        }
        cout << "NO" << endl;
        return;
    }
    if (n >= 2)
    {
        int lim = n * k;
        if(n >= 2 and n % 2 == 0)
        {
            cout<<"YES"<<endl;
            
            int evens = 2;
            int odds = 1;
            for(int i = 1; i <= n; i++)
            {
                if(i & 1)
                {
                    for(int j = 0; j < k; j++)
                    {
                        cout<<odds<<" ";
                        odds += 2;
                    }
                    cout<<endl;
                }
                else
                {
                    for(int j = 0; j < k; j++)
                    {
                        cout<<evens<<" ";
                        evens+=2;
                    }
                    cout<<endl;
                }
            }
            
            
        }
        else if(k == 1)
        {
            cout<<"YES"<<endl;
            for(int i = 1; i <= lim; i++)
            {
                cout<<i<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

