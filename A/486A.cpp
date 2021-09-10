#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    if (n & 1)
        cout << -((n + 1) / 2) << endl;
    else
        cout << n / 2 << endl;
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
