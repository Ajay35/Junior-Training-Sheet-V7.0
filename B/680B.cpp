#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    x--;
    int l = x - 1;
    int r = x + 1;
    int ans = 0, d = 1;
    ;
    while (l >= 0)
    {
        if (a[l])
        {
            if (x + d < n and a[x + d])
                ans += 2, a[l] = 0, a[x + d] = 0;
            else if (x + d >= n)
                ans += 1, a[l] = 0;
        }
        d++;
        l--;
    }
    d = 1;
    while (r < n)
    {
        if (a[r])
        {
            if (x - d >= 0 and a[x - d])
                ans += 2, a[r] = 0, a[x - d] = 0;
            else if (x - d < 0)
                ans += 1;
        }
        d++;
        r++;
    }
    cout << ans + a[x] << endl;
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