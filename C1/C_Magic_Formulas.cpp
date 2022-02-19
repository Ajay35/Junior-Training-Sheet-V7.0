
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
    int n;
    cin >> n;
    int ans = 0;
    vi a(n + 1);
    for (int i = 2; i <= n; i++)
    {
        int d = n / i;
        int l = 1;
        int r = i - 1;
        a[l] += d;
        if (r + 1 <= n)
            a[r + 1] -= d;
        int rem = n % i;
        if (rem > 0)
        {
            a[l]++;
            if (rem + 1 <= n)
                a[rem + 1] -= 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        a[i] += a[i - 1];
    }

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (a[i] & 1)
        {
            ans = ans ^ (x ^ i);
        }
        else
        {
            ans = ans ^ x;
        }

    }

    cout << ans << endl;

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

