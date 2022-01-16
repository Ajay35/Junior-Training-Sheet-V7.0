/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> nuts;
    int n;
    cin >> n;
    vector<int> bar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> bar[i];
        if (bar[i])
            nuts.push_back(i);
    }
    long long ans = (nuts.size() > 0 ? 1 : 0);
    for (int i = 1; i < nuts.size(); i++)
    {
        ans = ans * (nuts[i] - nuts[i - 1]);
    }
    cout << ans << endl;
    return 0;
}