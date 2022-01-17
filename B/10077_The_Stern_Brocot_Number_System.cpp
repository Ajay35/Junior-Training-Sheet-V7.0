/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    pair<int, int> left, right, mid;
    while (cin >> a >> b)
    {
        if (a == 1 and b == 1)
            break;
        string res = "";
        left = make_pair(0, 1), right = make_pair(1, 0), mid = make_pair(1, 1);
        while (mid.first != a || mid.second != b)
        {
            int v1 = a * mid.second, v2 = b * mid.first;
            if (v1 < v2)
            {
                right = mid;
                mid = make_pair(left.first + mid.first, left.second + mid.second);
                res += 'L';
            }
            else
            {
                left = mid;
                mid = make_pair(mid.first + right.first, mid.second + right.second);
                res += 'R';
            }
        }
        cout << res << endl;
    }
    return 0;
}