#include <bits/stdc++.h>

using namespace std;

void solve()
{

    vector<pair<int, int> > games[5];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int x;
            cin >> x;
            games[j].push_back(make_pair(x, i));
        }
    }
    for (int i = 0; i < 5; i++)
    {
        sort(begin(games[i]), end(games[i]));
    }
    vector<int> freq_win(n);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < n; j++)
        {
            freq_win[games[i][j].second] += (games[i].size() - j);
        }
    }
    int max_freq = *max_element(begin(freq_win), end(freq_win));
    if (max_freq == 0)
    {
        cout << -1 << endl;
        return;
    }
    vector<int> final_winners;
    for (int i = 0; i < n; i++)
    {
        if (freq_win[i] == max_freq)
            final_winners.push_back(i);
    }

    if (final_winners.size() == 1)
        cout << final_winners[0] + 1 << endl;
    else
        cout << -1 << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}