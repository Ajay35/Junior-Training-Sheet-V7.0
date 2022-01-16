/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

long long power(long long x, long long y)
{
    long long res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % mod;
        x = (x * x) % mod;
        y = y / 2;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << ((power(3, 3 * n) - power(7, n)) % mod + mod) % mod << endl;
    return 0;
}