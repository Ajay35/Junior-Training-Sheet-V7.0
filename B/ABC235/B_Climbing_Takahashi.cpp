/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            ans = a[i];
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}