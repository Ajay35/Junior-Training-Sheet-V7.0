#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int> > scores(n);
    for (int i = 0; i < n; i++)
        cin >> scores[i].first >> scores[i].second;
    for (int i = 0; i < n; i++)
    {
        if (scores[i].first != scores[i].second)
        {
            cout << "rated" << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (scores[i].first > scores[j].first)
            {
                cout << "unrated" << endl;
                return;
            }
        }
    }
    cout << "maybe" << endl;
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