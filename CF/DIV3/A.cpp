#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int Ax, Ay, Bx, By, Fx, Fy;
    cin >> Ax >> Ay >> Bx >> By >> Fx >> Fy;
    if ((Ax == Bx and Bx == Fx) or (Ay == By and By == Fy))
    {
        if ((Ax == Bx and Bx == Fx))
        {
            if ((Ay < Fy and Fy < By) or (By < Fy and Fy < Ay))
                cout << abs(Ay - By) + 2 << endl;
            else
                cout << abs(Ay - By) << endl;
        }
        else
        {
            if ((Ax < Fx and Fx < Bx) or (Bx < Fx and Fx < Ax))
                cout << abs(Ax - Bx) + 2 << endl;
            else
                cout << abs(Ax - Bx) << endl;
        }
    }
    else
    {
        cout << abs(Ax - Bx) + abs(Ay - By) << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}