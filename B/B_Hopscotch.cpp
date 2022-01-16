/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;
const int N = 1000001;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, x, y;
    vector<pair<int, int>> b(N);
    vector<int> c(N);
    b[1] = make_pair(1, -1);
    b[2] = make_pair(2, -1);
    c[1] = 1;
    c[2] = 1;
    for (int i = 3; i < N; i++)
    {
        if (c[i - 1] == 1)
        {
            c[i] = 2;
            b[i] = make_pair(b[i - 1].first + 1, b[i - 1].first + 2);
        }
        else
        {
            c[i] = 1;
            b[i] = make_pair(b[i - 1].second + 1, -1);
        }
    }
    cin >> a >> x >> y;

    if (y % a == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    int h = (y / a) + ((y % a) > 0);
    int block = c[h];
    if (block == 1)
    {
        double aa = a;
        double xx = x;
        if (-aa / 2 < xx and xx < aa / 2)
            cout << b[h].first << endl;
        else
            cout << -1 << endl;
    }
    else
    {
        double aa = a;
        double xx = x;
        if (-a < x and x < 0)
            cout << b[h].first << endl;
        else if (x > 0 and x < a)
            cout << b[h].second << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}