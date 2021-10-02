#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<long long> fence(n);
    long long min_sum = 1e12;
    int ind = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> fence[i];
        if (i > 0)
            fence[i] += fence[i - 1];
        if (i >= k - 1)
        {
            
            long long sum = fence[i] - (i - k >= 0? fence[i - k]: 0);
            if (sum < min_sum)
            {
                min_sum = sum;
                ind = i - k + 1;
            }
        }
    }
    cout << ind + 1 << endl;
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