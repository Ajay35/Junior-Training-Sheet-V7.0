#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            for (int k = 1; k <= 9; k++)
            {
                for (int l = 1; l <= 9; l++)
                {
                    if (i != j and i != k and i != l and j != k and j != l and k != l)
                    {
                        if (i + j == r1 and k + l == r2 and i + k == c1 and j + l == c2 and i + l == d1 and j + k == d2)
                        {
                            cout << i << " " << j << endl;
                            cout << k << " " << l << endl;
                            return;
                        }
                    }
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