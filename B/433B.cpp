#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
        if (i > 0)
            a[i] += a[i - 1];
    }
    sort(begin(b), end(b));
    for (int i = 1; i < n; i++)
        b[i] += b[i - 1];
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int q, l, r;
        cin >> q >> l >> r;
        if (q == 1)
        {
            r--;
            l--;
            cout << a[r] - (l - 1 >= 0 ? a[l - 1] : 0) << endl;
        }
        else
        {
            r--;
            l--;
            cout << b[r] - (l - 1 >= 0 ? b[l - 1] : 0) << endl;
        }
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