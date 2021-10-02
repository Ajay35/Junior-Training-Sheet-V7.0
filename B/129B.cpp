#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[101];
    int A[101] = {0};
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        A[a]++;
        A[b]++;
    }
    int c = 0;
    bool fl = true;
    while (fl)
    {
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            if (A[i] == 1)
                v.push_back(i);
        }
        if (v.size() == 0)
            break;
        for (auto it : v)
        {
            A[it]--;
            for (auto j : adj[it])
            {
                A[j]--;
            }
        }
        c++;
    }
    cout << c << endl;
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