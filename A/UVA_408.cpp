#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}
void solve()
{
    int x, y;
    while (cin >> x >> y)
    {
        printf("%10d%10d", x, y);
        if (gcd(x, y) == 1)
            printf("    Good Choice\n\n");
        else
            printf("    Bad Choice\n\n");
    }
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