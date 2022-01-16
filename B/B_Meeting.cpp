/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;
typedef long long lint;

int X[2000], Y[2000], R[2000], N;

bool isHot(int x, int y)
{
    for (int i = 0; i < N; ++i)
    {
        lint dx = abs(x - X[i]);
        lint dy = abs(y - Y[i]);
        lint r2 = (lint)R[i] * R[i];
        lint rr = dx * dx + dy * dy;
        if (rr <= r2)
            return true;
    }
    return false;
}

int main()
{
    int xa, xb, ya, yb;
    cin >> xa >> ya >> xb >> yb;
    if (xa > xb)
        swap(xa, xb);
    if (ya > yb)
        swap(ya, yb);
    int ans = 0;
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        cin >> X[i] >> Y[i] >> R[i];
    }
    for (int x = xa; x <= xb; ++x)
    {
        if (!isHot(x, ya))
            ++ans;
        if (!isHot(x, yb))
            ++ans;
    }
    for (int y = ya + 1; y < yb; ++y)
    {
        if (!isHot(xa, y))
            ++ans;
        if (!isHot(xb, y))
            ++ans;
    }
    cout << ans << endl;

    return 0;
}