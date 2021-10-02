#include <bits/stdc++.h>

using namespace std;

int get_sum(string s)
{
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
        sum += (s[i] - '0');
    return sum;
}

void solve()
{
    string s;
    cin >> s;
    int ans = 0;

    while (get_sum(s) > 0 and s.size() > 1)
    {
        s = to_string(get_sum(s));
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
    //cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}