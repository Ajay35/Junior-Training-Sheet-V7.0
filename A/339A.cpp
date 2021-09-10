#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<char> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
            v.push_back(s[i]);
    }
    sort(begin(v), end(v));
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i < v.size() - 1)
            cout << "+";
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