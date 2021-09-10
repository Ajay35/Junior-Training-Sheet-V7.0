#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, t;
    cin >> n >> t;
    if (n == 1 and t == 10)
    {
        cout << -1 << endl;
        return;
    }
    if (t < 10)
    {
        for (int i = 0; i < n; i++)
            cout << t;
        cout << endl;
    }
    else
    {
        cout << 1;
        for (int i = 0; i < n - 1; i++)
            cout << 0;
        cout << endl;
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