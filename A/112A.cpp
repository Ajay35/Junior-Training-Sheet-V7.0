#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    int ans = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (tolower(s1[i]) < tolower(s2[i]))
        {
            ans = -1;
            break;
        }
        else if (tolower(s1[i]) > tolower(s2[i]))
        {
            ans = 1;
            break;
        }
    }
    cout << ans << endl;
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