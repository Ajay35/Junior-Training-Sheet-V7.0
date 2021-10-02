#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    string s1 = s;
    reverse(begin(s1), end(s1));
    cout << s + s1 << endl;
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