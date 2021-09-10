#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v[4];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x].push_back(i + 1);
    }
    int ans = 0;
    vector<vector<int> > teams;
    for (int i = 0; i < v[1].size(); i++)
    {
        if (i < v[1].size() and i < v[2].size() and i < v[3].size())
        {
            int t[3] = {v[1][i], v[2][i], v[3][i]};
            vector<int> temp(t, t + 3);
            teams.push_back(temp);
            ans++;
        }
    }
    cout << ans << endl;
    for (int i = 0; i < teams.size(); i++)
    {
        cout << teams[i][0] << " " << teams[i][1] << " " << teams[i][2] << endl;
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