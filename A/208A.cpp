#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<string> ans;
    string temp;
    for (int i = 0; i < n;)
    {
        if (i < n and i + 1 < n and i + 2 < n and s[i] == 'W' and s[i + 1] == 'U' and s[i + 2] == 'B')
        {
            if (temp.size() > 0)
            {
                ans.push_back(temp);
                temp.clear();
            }
            i += 3;
            continue;
        }
        else
        {
            temp.push_back(s[i]);
            i++;
        }
    }
    if (temp.size())
        ans.push_back(temp);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
        if (i < ans.size() - 1)
            cout << " ";
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