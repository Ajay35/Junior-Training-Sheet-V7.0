#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void solve()
{
    int k, r;
    cin >> k >> r;
    int l = (k * 10) / gcd(k, 10);
    int shovels = l / k;
    int ans = shovels;
    while (shovels > 0)
    {
        if ((shovels * k) % 10 == r)
        {
            ans = min(ans, shovels);
        }
        shovels--;
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