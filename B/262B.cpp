#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(begin(a), end(a));
    for (int i = 0; i < n and k > 0; i++)
    {
        if (a[i] < 0)
        {
            a[i] = a[i] * -1;
            k--;
        }
    }

    if (k > 0)
    {
        k = k % 2;
        if (k)
        {
            int smallest_ind = min_element(begin(a), end(a)) - a.begin();
            a[smallest_ind] = a[smallest_ind] * -1;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += a[i];
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