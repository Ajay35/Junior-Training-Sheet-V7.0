#include <bits/stdc++.h>

using namespace std;

void solve()
{
    double a, b, e, d, h, v;
    cin >> d >> h >> v >> e;
    a = h * d * d / 4 * 3.1415926;
    b = d * d / 4 * e * 3.1415926;
    if (b > v)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl
             << a / (v - b) << endl;
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