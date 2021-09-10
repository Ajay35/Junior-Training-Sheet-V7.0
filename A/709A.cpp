#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, b, d;
    cin >> n >> b >> d;
    int total_size = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= b)
            total_size += x;
        if (total_size > d)
        {
            total_size = 0;
            ans++;
        }
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