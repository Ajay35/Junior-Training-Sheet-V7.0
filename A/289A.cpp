#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int> > seg;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        sum += y - x + 1;
    }

    cout << (k - (sum % k)) % k << endl;
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