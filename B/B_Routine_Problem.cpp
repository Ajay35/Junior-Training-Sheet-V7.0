/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    double r1 = (double)a / (double)c;
    double r2 = (double)b / (double)d;
    if (r1 < r2)
    {
        int left_num = b * c - d * a;
        int left_deno = b * c;

        int _gcd = gcd(left_num, left_deno);
        // cout<<_gcd<<endl;
        left_num /= _gcd;
        left_deno /= _gcd;
        cout << left_num << "/" << left_deno << endl;
    }
    else if (r1 > r2)
    {
        int left_num = a * d - c * b;
        int left_deno = a * d;
        int _gcd = gcd(left_num, left_deno);
        left_num /= _gcd;
        left_deno /= _gcd;
        cout << left_num << "/" << left_deno << endl;
    }
    else
    {
        cout << 0 << "/" << 1 << endl;
    }
    return 0;
}