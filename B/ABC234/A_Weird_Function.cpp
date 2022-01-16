/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;
long long f(long long x)
{
    return (x * x) + (2 * x) + 3;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long x;
    cin >> x;
    cout << f(f(f(x) + x) + f(f(x))) << endl;
    return 0;
}