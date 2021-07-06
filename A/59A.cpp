#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int cap = 0, sma = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' and s[i] <= 'Z')
            cap++;
        else
            sma++;
    }
    if (sma >= cap)
    {
        for (int i = 0; i < s.size(); i++)
            cout << (char)tolower(s[i]);
        cout << endl;
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
            cout << (char)toupper(s[i]);
        cout << endl;
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