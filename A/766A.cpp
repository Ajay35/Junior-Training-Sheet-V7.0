#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() == s2.size())
    {
        if (s1 == s2)
            cout << -1 << endl;
        else
            cout << s1.size() << endl;
    }
    else
        cout << max(s1.size(), s2.size()) << endl;
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