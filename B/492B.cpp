#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, l;
    cin >> n >> l;
    vector<double> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    double ans = 0;
    sort(begin(a), end(a));
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, (a[i] - a[i - 1]) / 2);
    }

    cout << fixed << setprecision(10);

    if (!binary_search(begin(a), end(a), 0))
    {
        ans = max(ans, a[0]);
    }
    if (!binary_search(begin(a), end(a), l))
    {
        ans = max(ans, l - a[n - 1]);
    }
    cout << ans << endl;
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