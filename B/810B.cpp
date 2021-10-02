#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, f;
    cin >> n >> f;
    vector<pair<int, int> > a;
    vector<int> k(n), l(n);
    for (int i = 0; i < n; i++)
    {
        cin >> k[i] >> l[i];
        a.push_back(make_pair(min(2 * k[i], l[i]) - min(k[i], l[i]), i));
    }
    sort(a.rbegin(), a.rend());

    long long ans = 0;
    for (int i = 0; i < f; i++)
    {
        int pos = a[i].second;
        ans += min(2 * k[pos], l[pos]);
    }
    for (int i = f; i < n; i++)
    {
        int pos = a[i].second;
        ans += min(k[pos], l[pos]);
    }
    cout << ans;
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