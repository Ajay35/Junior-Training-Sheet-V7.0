/* Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<long long> nums;
    queue<long long> que;
    que.push(4);
    que.push(7);
    map<long long, int> vis;
    while (!que.empty())
    {
        long long cur = que.front();
        que.pop();
        vis[cur] = 1;
        nums.push_back(cur);
        if (cur * 10 + 4 <= 1e9 and vis.count(cur * 10 + 4) == 0)
            que.push(cur * 10 + 4);
        if (cur * 10 + 7 <= 1e9 and vis.count(cur * 10 + 7) == 0)
            que.push(cur * 10 + 7);
    }
    int ind = lower_bound(begin(nums), end(nums), n) - nums.begin() + 1;
    cout << ind;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}