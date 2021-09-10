#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(2 * n + 1);
    for (int i = 0; i < 2 * n + 1; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i + 1 < 2 * n + 1; i += 2)
    {
        if (k > 0 and a[i - 1] < a[i] - 1 and a[i + 1] < a[i] - 1)
        {
            a[i]--;
            k--;
        }
    }
    for (int i = 0; i < 2 * n + 1; i++)
        cout << a[i] << " ";
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