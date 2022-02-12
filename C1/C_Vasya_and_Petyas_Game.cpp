
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
    int n; cin >> n;
    vi is_prime(n + 1, true), primes;
    is_prime[0] = is_prime[1] = 0;

    for (int i = 2; i * i <= n; i++) 
    {
        if (is_prime[i]) 
        {
            for (int j = i * i; j <= n; j += i) 
            {
                is_prime[j] = false;
            }
        }
    }
    vi ans;
    for (int i = 1; i <= n; i++) 
    {
        if (is_prime[i]) 
        {
            int q = 1;
            while (q <= n / i) 
            {
                q *= i;
                ans.push_back(q);
            }
        }
    }
    cout << sz(ans) << endl;
    for (int i : ans) 
    {
        cout<<i<<" ";
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

