#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<int> a(26);
    for (char c : s)
        a[c - 'a']++;
    int dis = 0;
    for (int i = 0; i < 26; i++)
        dis += (a[i] > 0);
    if (dis % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
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