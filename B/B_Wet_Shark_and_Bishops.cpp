/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<int, int> mp1, mp2;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        mp1[x + y]++;
        mp2[x - y]++;
    }

    long long ans = 0;
    for(auto it: mp1)
    {
        int p = it.second;
        ans += (p * (p - 1))/ 2;
    }
    for(auto it: mp2)
    {
        int p = it.second;
        ans += (p * (p - 1))/ 2;
    }
    cout << ans << endl;
    return 0;
}