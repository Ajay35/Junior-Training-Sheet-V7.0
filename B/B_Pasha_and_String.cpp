/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int m, n;
    n = s.size();
    cin >> m;
    vector<int> d(n + 1);
    for (int i = 0; i < m; i++)
    {
        int l;
        cin >> l;
        d[l - 1] += 1;
    }
    for (int i = 1; i < n; i++)
    {
        d[i] += d[i - 1];
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (d[i] & 1)
        {
            swap(s[i], s[n - i - 1]);
            d[i] = 0;
            d[n - i - 1] = 0;
        }
    }
    cout << s << endl;
    return 0;
}