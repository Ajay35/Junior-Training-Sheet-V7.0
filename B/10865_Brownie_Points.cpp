/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

long long x[200005], y[200005], dx, dy;
int n, n2, i, stan, ollie;
int main()
{
    while (cin >> n, n)
    {
        for (i = 0; i < n; ++i)
        {
            cin >> x[i] >> y[i];
        }
        n2 = (n >> 1);
        stan = ollie = 0;
        for (i = 0; i < n; ++i)
        {
            dx = x[i] - x[n2];
            dy = y[i] - y[n2];
            if (dx == 0 || dy == 0)
                continue;
            if (dx * dy > 0)
                ++stan;
            else
                ++ollie;
        }
        cout << stan << " " << ollie << endl;
    }
}
