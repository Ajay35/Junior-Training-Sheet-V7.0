#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> cities(n);
    for (int i = 0; i < n; i++)
        cin >> cities[i];

    for (int i = 0; i < n; i++)
    {
        int mn = INT_MAX;
        int mx = INT_MIN;
        if (i - 1 >= 0)
            mn = min(mn, abs(cities[i] - cities[i - 1]));
        if (i + 1 < n)
            mn = min(mn, abs(cities[i + 1] - cities[i]));

        mx = max(abs(cities[i] - cities[0]), abs(cities[n - 1] - cities[i]));
        cout << mn << " " << mx << endl;
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