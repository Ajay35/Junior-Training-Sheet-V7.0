/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    long long ans = 0;
    vector<int> zer(m), one(m);
    zer[0] = (b[0] == '0');
    one[0] = (b[0] == '1');
    for (int i = 1; i < m; i++)
    {
        zer[i] = zer[i - 1];
        one[i] = one[i - 1];
        if (b[i] == '1')
            one[i] += 1;
        else
            zer[i] += 1;
    }
    for (int i = 0; i < n; i++)
    {
        int le = i;
        int ri = m - (n - i);

        if (a[i] == '1')
            ans += (zer[ri] - (le - 1 >= 0 ? zer[le - 1] : 0));
        else
            ans += (one[ri] - (le - 1 >= 0 ? one[le - 1] : 0));
    }
    cout << ans << endl;
    ;
    return 0;
}