#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s.size() > 10)
        cout << s.front() << s.size() - 2 << s.back() << endl;
    else
        cout << s << endl;
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