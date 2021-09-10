#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total += a[i];
    }
    sort(begin(a), end(a));
    int sum = 0, ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        sum += a[i];
        if (sum > total - sum)
        {
            ans = n - i;
            break;
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