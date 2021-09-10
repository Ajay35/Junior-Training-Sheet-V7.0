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
    int Y, W;
    cin >> Y >> W;
    int s = max(Y, W);
    int D = 0;
    for (int i = s; i <= 6; i++)
        D++;
    int g = gcd(D, 6);
    int nume = D / g;
    int deno = 6 / g;
    cout << nume << "/" << deno << endl;
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