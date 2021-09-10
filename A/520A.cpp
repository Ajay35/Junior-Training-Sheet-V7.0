#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a(26);
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        char c = (char) tolower(s[i]);
        a[c - 'a']++;
        if (a[c - 'a'] == 1)
            d++;
    }
    if (d == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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