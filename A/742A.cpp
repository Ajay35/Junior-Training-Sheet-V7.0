#include <bits/stdc++.h>
using namespace std;

int power(int x, int y, int m)
{
    int res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % m;
        x = (x * x) % m;
        y = y >> 1;
    }
    return res;
}
void solve()
{
    int n;
    cin >> n;
    cout << power(1378, n, 10) << endl;
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