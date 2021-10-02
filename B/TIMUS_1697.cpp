#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int t = 0;
    while (true)
    {
        if (a + b * t >= c - d * t)
        {
            cout << a + b * t << endl;
            break;
        }
        if (c - d * t <= a + b * (t + 1))
        {
            cout << c - d * t << endl;
            break;
        }
        ++t;
    }

    return 0;
}