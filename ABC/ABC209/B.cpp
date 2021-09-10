#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, x;
    int bought = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        if ((i + 1) & 1)
            x -= b;
        else
            x -= (b - 1);
    }
    if (x >= 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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