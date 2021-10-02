#include <bits/stdc++.h>

using namespace std;

long long power(long long x, long long y, long long m)
{
    long long res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % m;
        x = (x * x) % m;
        y = y >> 1;
    }
    return res;
}

void solve()
{
    long long b, p, m;
    while (cin >> b >> p >> m)
    {
        cout << power(b, p, m) << endl;
    }
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