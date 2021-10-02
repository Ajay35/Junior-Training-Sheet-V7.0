#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(begin(a), end(a));
    bool pos = false;

    for (int i = 0; i + 2 < n; i++)
    {
        int x = a[i];
        int y = a[i + 1];
        int z = a[i + 2];
        if (x < y + z and y < x + z and z < x + y)
        {
            pos = true;
            break;
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