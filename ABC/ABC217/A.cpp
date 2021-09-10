#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    if (s < t)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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