#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, ans = 0;
    string s1, s2;
    cin >> n;
    cin >> s1;
    s2 = s1;
    sort(begin(s1), end(s1));
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
            ans++;
    }
    cout << ans << endl;
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