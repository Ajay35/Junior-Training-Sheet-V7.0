/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

vector<int> get_index(string &s, char d)
{
    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (d == s[i])
            v.push_back(i);
    }
    return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;

    string ans;

    int cnt = 0;
    for (auto c : s)
    {
        if (c == '1')
            ++cnt;
        else
            ans += c;
    }

    int n = ans.size();
    int pos = -1;
    while (pos + 1 < n && ans[pos + 1] == '0')
        ++pos;
    ans.insert(pos + 1, string(cnt, '1'));

    cout << ans << endl;
    return 0;
}