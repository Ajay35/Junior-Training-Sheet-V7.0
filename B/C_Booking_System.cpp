/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

bool cmp(vector<int> &a, vector<int> &b)
{
    if (a[1] == b[1])
        return a[0] < b[0];
    return a[1] < b[1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n;
    set<pair<int, int>> tables;
    vector<vector<int>> req(n, vector<int>(3));
    for (int i = 0; i < n; i++)
    {
        cin >> req[i][0] >> req[i][1];
        req[i][2] = i + 1;
    }
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin>>x;
        tables.insert({x, i + 1});
    }
    vector<vector<int>> ans;
    int total = 0;
    sort(begin(req), end(req), cmp);

    int x = req.size() - 1;
    
    while (x >= 0 and !tables.empty())
    {
        auto it = lower_bound(begin(tables), end(tables), make_pair(req[x][0], -1));
        if(it != tables.end())
        {
            total += req[x][1];
            ans.push_back({req[x][2], (*it).second});
            // remove table.
            tables.erase(it);
            x--;
        }
        else
        {
            // guest leaves.
            x--; 
        }
    }
    cout << ans.size() << " " << total << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }
    return 0;
}