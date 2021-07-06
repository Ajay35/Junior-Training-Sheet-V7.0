#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int g = 1;
    string s;
    cin >> s;
    for (int i = 1; i < n; i++)
    {
        string p;
        cin >> p;
        if (p != s)
            g++;
        s = p;
    }
    cout << g << endl;
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