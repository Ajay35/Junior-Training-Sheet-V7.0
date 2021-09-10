#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        
        int sum = 0;
        int x;
        cin >> x;
        vector<int> temp(k + 1);
        while (x > 0)
        {
            if ((x % 10) > k)
            {
                x = x / 10;
                continue;
            }
            temp[x % 10]++;
            if (temp[x % 10] == 1)
                sum++;
            x = x / 10;
        }
        ans += (sum == k + 1);
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