#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans[x - 1] = i;
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] + 1 << " ";
    cout << endl;
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