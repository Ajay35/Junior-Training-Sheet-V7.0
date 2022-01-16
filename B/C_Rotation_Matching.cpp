/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, ans = 0;
    cin >> n;
    vector<int> a(n), b(n);
    vector<int> a_ind(n + 1), b_ind(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a_ind[a[i]] = i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        b_ind[b[i]] = i;
    }

    map<int, int> gap;
    for (int i = 0; i < n; i++)
    {
        int g = b_ind[b[i]] - a_ind[b[i]];
        g += n;
        g = g % n;
        gap[g]++;
    }
    for (auto g : gap)
    {
        ans = max(ans, g.second);
    }
    cout << ans << endl;
    return 0;
}