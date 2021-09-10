#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vis(n + 1);
    int v = 0;
    int p, q;
    cin >> p;
    while (p--)
    {
        int x;
        cin >> x;
        vis[x]++;
        if (vis[x] == 1)
            v++;
    }
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        vis[x]++;
        if (vis[x] == 1)
            v++;
    }
    if (v == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
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