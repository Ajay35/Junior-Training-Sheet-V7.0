/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;
    cin >> x >> y;
    int rem = max(0, y - x);
    int ans = rem / 10;
    if (rem % 10 > 0)
        ans++;
    cout << ans << endl;
    return 0;
}