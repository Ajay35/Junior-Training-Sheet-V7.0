#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    return (p1.second) > (p2.second);
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int> > boxes(m);
    for (int i = 0; i < m; i++)
    {
        cin >> boxes[i].first >> boxes[i].second;
    }

    sort(begin(boxes), end(boxes), cmp);
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        if (n > 0)
        {
            int get = min(boxes[i].first, n);
            ans += (get * boxes[i].second);
            n -= get;
        }
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