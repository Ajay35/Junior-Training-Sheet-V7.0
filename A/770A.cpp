#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int cur = 0;
    for (int i = 0; i < n; i++)
    {
        char c = cur + 'a';
        cout << c;
        cur++;
        if (cur == k)
            cur = 0;
    }
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