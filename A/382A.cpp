#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s, t, l, r;
    cin >> s;
    int p = s.find('|');
    l = s.substr(0, p);
    r = s.substr(p + 1);
    cin >> t;
    for (auto c : t)
        if (l.size() <= r.size())
            l += c;
        else
            r += c;
    cout << (l.size() == r.size() ? l + "|" + r : "Impossible") << endl;
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