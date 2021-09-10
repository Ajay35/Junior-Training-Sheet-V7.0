#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(26);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char col;
            cin >> col;
            a[col - 'A']++;
        }
    }
    if (a['M' - 'A'] > 0 or a['C' - 'A'] > 0 or a['Y' - 'A'] > 0)
        cout << "#Color" << endl;
    else
        cout << "#Black&White" << endl;
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