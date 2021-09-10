#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (360 % (180 - n) == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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