#include <bits/stdc++.h>

using namespace std;

bool check(int v, int k, int n)
{
    int lines = v;
    int kk = k;
    while ((v / kk) > 0 and lines < n)
    {
        lines += (v / kk);
        kk = kk * k;
    }
    return lines >= n;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    int low = 1, high = n;
    int ans = 1e9;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (check(mid, k, n))
        {
            high = mid;
            ans = min(ans, mid);
        }
        else
        {
            low = mid + 1;
        }
    }
    if (ans == 1e9)
        cout << n << endl;
    else
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