#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n, m, a;
    cin >> n >> m >> a;
    cout << ((n / a) + ((n % a) > 0)) * ((m / a) + ((m % a) > 0)) << endl;
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