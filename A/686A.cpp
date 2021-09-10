#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    long long x;
    cin >> n >> x;
    int dk = 0;
    for (int i = 0; i < n; i++)
    {
        char c;
        int d;
        cin >> c >> d;
        if (c == '+')
            x += d;
        else
        {
            if (x >= d)
                x -= d;
            else
                dk++;
        }
    }
    cout << x << " " << dk << endl;
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