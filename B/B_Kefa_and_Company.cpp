/* Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, d;
    cin >> n >> d;
    vector<pair<int, int>> friends(n);
    for (int i = 0; i < n; i++)
    {
        cin >> friends[i].first >> friends[i].second;
    }
    sort(begin(friends), end(friends), cmp);
    vector<long long> fact(n);
    fact[0] = friends[0].second;
    for (int i = 1; i < n; i++)
    {
        fact[i] = fact[i - 1];
        fact[i] += friends[i].second;
    }

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        int l = i + 1;
        int r = n - 1;
        int ind = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (friends[mid].first - d < friends[i].first)
            {
                ind = max(ind, mid);
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        int le = i;
        int ri = i;
        if (ind != -1)
            ri = ind;
        ans = max(ans, fact[ri] - (le - 1 >= 0 ? fact[le - 1] : 0));
    }
    cout << ans << endl;
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