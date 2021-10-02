#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> g(n);
    vector<int> dw(n), c(n);
    set<int> dis;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == 'G')
                dw[i] = j;
            if (s[j] == 'S')
                c[i] = j;
        }
        int d = c[i] - dw[i];
        if (d < 0)
        {
            cout << -1 << endl;
            return;
        }
        if (d > 0)
        {
            dis.insert(d);
        }
    }
    cout << dis.size() << endl;
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