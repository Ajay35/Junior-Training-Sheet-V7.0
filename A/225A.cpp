#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int tp;
    cin >> tp;
    int bt = 7 - tp;
    bool pos = true;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x == bt or y == bt or x == tp or y == tp)
        {
            pos = false;
        }
    }
    if (pos)
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
    //cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}