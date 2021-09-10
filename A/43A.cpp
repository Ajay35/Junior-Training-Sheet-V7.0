#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<string, int> goals;
    for (int i = 0; i < n; i++)
    {
        string team;
        cin >> team;
        goals[team] += 1;
    }
    int max_goals = 0;
    string winner;
    for (auto it : goals)
    {
        if (it.second > max_goals)
        {
            winner = it.first;
            max_goals = max(max_goals, it.second);
        }
    }
    cout << winner << endl;
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