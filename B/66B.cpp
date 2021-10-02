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
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int l = i - 1;
        int r = i + 1;
        int le = 0, ri = 0;
        while (l >= 0 and a[l] <= a[l + 1])
        {
            l--;
            le++;
        }

        while (r < n and a[r] <= a[r - 1])
        {
            r++;
            ri++;
        }
        ans = max(ans, 1 + le + ri);
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