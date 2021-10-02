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

    vector<vector<int> > dp(n, vector<int>(3, 0));

    if (a[0] != 0)
    {
        dp[0][0] = 0;
        if (a[0] == 2 or a[0] == 3)
            dp[0][1] = 1;
        if (a[0] == 1 or a[0] == 3)
            dp[0][2] = 1;
    }

    for (int i = 1; i < n; i++)
    {
        dp[i][0] = max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][2]));

        if (a[i] == 1)
        {
            dp[i][2] = 1 + max(dp[i - 1][0], dp[i - 1][1]);
        }
        else if (a[i] == 2)
        {
            dp[i][1] = 1 + max(dp[i - 1][0], dp[i - 1][2]);
        }
        else if (a[i] == 3)
        {
            dp[i][1] = 1 + max(dp[i - 1][0], dp[i - 1][2]);
            dp[i][2] = 1 + max(dp[i - 1][0], dp[i - 1][1]);
        }
    }

    cout << n - max(dp[n - 1][0], max(dp[n - 1][2], dp[n - 1][1])) << endl;
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