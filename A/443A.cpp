#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    set<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
            st.insert(s[i]);
    }
    cout << st.size() << endl;
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