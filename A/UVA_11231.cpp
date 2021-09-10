#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m, c;
    while (cin >> n >> m >> c)
    {
        if (n == 0 and m == 0 and c == 0)
            break;
        cout << ((n - 7) * (m - 7) + c) / 2 << endl;
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