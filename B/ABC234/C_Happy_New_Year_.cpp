/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long k;
    cin >> k;

    vector<int> ans(61);
    for (int i = 60; i >= 0 and k > 0; i--)
    {
        long long cur = (1ll << i);
        if (k >= cur)
        {
            k -= cur;
            ans[i] = 2;
        }
    }
    vector<int> s;
    bool found = false;
    for (int i = 60; i >= 0; i--)
    {
        if (ans[i] == 2)
        {
            s.push_back(ans[i]);
            found = true;
        }
        else if (ans[i] == 0 and found)
        {
            s.push_back(ans[i]);
        }
    }
    for (int i = 0; i < s.size(); i++)
        cout << s[i];
    cout << endl;
    return 0;
}