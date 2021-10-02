#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int> > trees(n);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> trees[i].first >> trees[i].second;
        s.insert(trees[i].first);
    }
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        int le = trees[i].first - trees[i].second;
        auto it = s.lower_bound(le);
        if (it != s.end() and *it == trees[i].first)
        {
            s.insert(le);
            ans++;
        }
        else
        {
            auto it1 = s.upper_bound(trees[i].first);
            if (it1 == s.end() or *it1 > trees[i].first + trees[i].second)
            {
                s.insert(trees[i].first + trees[i].second);
                ans++;
            }
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