#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ans = 0, p = 0, c = 0;
    ;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            if (p == 0)
                ans++;
            else
                c--, p--;
        }
        else
            p += x;
    }
    cout << ans << endl;
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