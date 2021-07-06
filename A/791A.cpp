#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int l, b;
    cin >> l >> b;
    int ans = 0;
    while (l <= b)
    {
        l += (2 * l);
        b += b;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
