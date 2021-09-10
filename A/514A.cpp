#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s[0] == '9')
        cout << 9;
    else if ((s[0] - '0') > (9 - (s[0] - '0')))
        cout << 9 - (s[0] - '0');
    else
        cout << s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] - '0' > 9 - (s[i] - '0'))
            cout << 9 - (s[i] - '0');
        else
            cout << s[i];
    }
    cout << endl;
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