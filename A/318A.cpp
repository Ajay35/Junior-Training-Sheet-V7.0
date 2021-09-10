#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    if (n & 1)
    {
        if ((n / 2) + 1 < k)
        {
            // even number
            k -= (n / 2) + 1;
            cout << 2 * k << endl;
        }
        else
        {
            // odd number
            cout << 2 * (k - 1) + 1 << endl;
        }
    }
    else
    {
        if (k > n / 2)
        {
            // even number
            k -= n / 2;
            cout << 2 * k << endl;
        }
        else
        {
            // odd number
            cout << 2 * (k - 1) + 1 << endl;
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