/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, d, q;
    cin >> n >> d >> q;
    for (int i = 0; i < q; ++i)
    {
        int x, y;
        cin >> x >> y;

        bool ok = true;
        if (!((x - y) <= d && (x - y) >= -d))
            ok = false;
        if (!((x + y) <= n + n - d && (x + y) >= d))
            ok = false;

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}