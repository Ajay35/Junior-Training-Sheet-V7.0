#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> freq(1001);
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
        mx = max(mx, freq[x]);
    }
    int upper = ceil((double)n / 2);
    if (mx > upper)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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