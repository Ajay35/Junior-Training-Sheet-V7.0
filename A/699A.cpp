#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a(n);
    vector<int> le, ri;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (s[i] == 'L')
            le.push_back(x);
        else
            ri.push_back(x);
    }
    if (le.size() == 0 or ri.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        int ans = 2e9;
        for (int i = 0; i < ri.size(); i++)
        {
            int ind = lower_bound(le.begin(), le.end(), ri[i]) - le.begin();
            if (ind == le.size())
                continue;
            ans = min(ans, abs(ri[i] - le[ind]));
        }
        if (ans == 2e9)
            cout << -1 << endl;
        else
            cout << ans / 2<< endl;
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