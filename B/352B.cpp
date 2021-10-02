#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a[100005];
    vector<pair<int, int> > ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x].push_back(i + 1);
    }

    for (int i = 1; i <= 100000; i++)
    {
        if (a[i].size() >= 1)
        {
            if (a[i].size() == 1)
            {
                ans.push_back(make_pair(i, 0));
            }
            else
            {
                int d = a[i][1] - a[i][0];
                bool pos = true;
                for (int j = 2; j < a[i].size(); j++)
                {
                    if (a[i][j] - a[i][j - 1] != d)
                    {
                        pos = false;
                    }
                }
                if (pos)
                    ans.push_back(make_pair(i, d));
            }
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
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