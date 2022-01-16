/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(begin(a), end(a));
    int ans = 1e6;
    for (int i = 0; i + 1 < n; i++)
    {
        int x = a[i];
        int ind = upper_bound(a.begin() + i + 1, a.end(), 2 * x) - a.begin();
        ind--;
        int le = i;
        int ri = n - ind - 1;

        ans = min(ans, le + ri);
    }
    cout << ans << endl;
    return 0;
}