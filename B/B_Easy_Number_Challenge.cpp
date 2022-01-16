/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;
const int mod = 1073741824;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    long long ans = 0;
    vector<int> divs(1000001, 1);
    for (int i = 2; i <= 1000000; i++)
    {
        for (int j = i; j <= 1000000; j += i)
        {
            divs[j]++;
        }
    }
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                ans += divs[i * j * k];
                ans = ans % mod;
            }
        }
    }
    cout << ans << endl;
    return 0;
}