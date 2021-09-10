#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(begin(a), end(a));
    int l = 1, r = n - 2;
    while (l < n and a[l] == a[l - 1])
        l++;
    while (r >= 0 and a[r] == a[r + 1])
        r--;
    if (l >= n or r <= 0)
        cout << 0 << endl;
    else
        cout << r - l + 1 << endl;
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