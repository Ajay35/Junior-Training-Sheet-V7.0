#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int ones = 0, ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '1')
            ones++;
    }
    if (ones == 0)
    {
        cout << 0 << endl;
    }
    else if (ones == 1)
    {
        double nn = (double)n;
        cout << ceil((nn - 1) / 2) << endl;
    }
    else
    {
        double nn = (double)n;
        cout << ceil((nn) / 2) << endl;
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