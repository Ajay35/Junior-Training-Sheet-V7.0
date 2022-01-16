/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    set<int> s;
    for (int i = 0; i < k; i++)
    {
        s.insert(p[i]);
    }
    vector<int> ans(n - k + 1);
    ans[0] = *s.begin();
    int ind = 1;
    for (int i = k; i < n; i++)
    {
        s.insert(p[i]);
        if (s.size() > k)
        {
            s.erase(s.begin());
        }
        ans[ind++] = *(s.begin());
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
    return 0;
}