#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<long long> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];
    sort(begin(c), end(c));
    long long ans = c[0];
    int sub = 1;
    for (int i = 1; i < n; i++)
    {
        c[i] -= sub;
        if (c[i] > 0)
            ans = (ans * (1ll) * c[i]) % mod;
        else
        {
            ans = 0;
            break;
        }
        sub++;
    }
    cout << ans % mod << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}