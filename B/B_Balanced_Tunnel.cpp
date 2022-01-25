/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n], m[n];
    map<int, int> store;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        store[x] = i + 1;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = store[x];
    }
    m[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
        m[i] = min(a[i], m[i + 1]);
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            ans++;
    }
    cout << ans << endl;
    return 0;
}