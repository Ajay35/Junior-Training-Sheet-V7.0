/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1];
    }
    int sa = 0, sb = 0;
    string ans;
    for (int i = 0; i < n; i++)
    {
        if (abs(sa + a[i][0] - sb) <= 500)
        {
            sa += a[i][0];
            ans.push_back('A');
        }
        else if (abs(sb + a[i][1] - sa) <= 500)
        {
            sb += a[i][1];
            ans.push_back('G');
        }
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << ans << endl;
    return 0;
}