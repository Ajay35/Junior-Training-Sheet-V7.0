#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m, k, t;
    cin >> n >> m >> k >> t;
    vector<pair<int, int> > waste(k);
    for (int i = 0; i < k; i++)
    {
        cin >> waste[i].first >> waste[i].second;
    }

    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        int waste_cells = 0;
        int total_cells = (m * (x - 1)) + y;
        bool w_cell = false;
        for (int j = 0; j < k; j++)
        {
            if (x == waste[j].first and y == waste[j].second)
            {
                w_cell = true;
                break;
            }
            if ((x > waste[j].first) or (x == waste[j].first and y > waste[j].second))
            {
                waste_cells++;
            }
        }
        if (w_cell)
        {
            cout << "Waste" << endl;
            continue;
        }
        int rem_cells = total_cells - waste_cells;
        rem_cells = rem_cells % 3;
        //cout<<total_cells<<" "<<waste_cells<<" "<<rem_cells<<endl;
        if (rem_cells == 0)
            cout << "Grapes" << endl;
        else if (rem_cells == 1)
            cout << "Carrots" << endl;
        else
            cout << "Kiwis" << endl;
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