#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void solve()
{
    long long l, r;
    cin >> l >> r;
    for (long long i = l; i <= r; i++)
    {
        for (long long j = i + 1; j <= r; j++)
        {
            for (long long k = j + 1; k <= r; k++)
            {
                if (gcd(i, j) == 1 and gcd(j, k) == 1 and gcd(i, k) != 1)
                {
                    cout << i << " " << j << " " << k << endl;
                    return;
                }
            }
        }
    }
    cout << -1 << endl;
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