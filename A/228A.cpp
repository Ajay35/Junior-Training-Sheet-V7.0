#include <bits/stdc++.h>

using namespace std;

void solve()
{
    set<int> s;
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << 4 - s.size() << endl;
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