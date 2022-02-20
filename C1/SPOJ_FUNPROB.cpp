
/* Ajay Jadhav */

#include <bits/stdc++.h>
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;

void solve()
{
    double n, m;

    while (cin >> n >> m)
    {
        if (n == 0 and m == 0)
            break;
        if (n > m)
        {
            cout << fixed << setprecision(6) << 0.000000 << endl;
        }
        else
        {
            cout << fixed << setprecision(6) << (m + 1 - n) / (m + 1) << endl;
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}

