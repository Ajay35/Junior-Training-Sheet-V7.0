/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k;
    long long xs, ys;
    cin >> n >> m;
    cin >> xs >> ys;
    cin >> k;
    long long ans = 0;
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        long long l = 1, r = 1e9;
        long long steps = 0;
        while (l < r)
        {
            long long mid = (l + r) / 2;
            long long nx = (xs + (mid * x));
            long long ny = (ys + (mid * y));
            if (nx >= 1 and nx <= n and ny >= 1 and ny <= m)
            {
                l = mid + 1;
                steps = max(steps, mid);
            }
            else
            {
                r = mid;
            }
        }
        xs = (xs + (steps * x));
        ys = (ys + (steps * y));
        ans += steps;
    }
    cout << ans << endl;
    return 0;
}