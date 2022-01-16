/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long sum = 0, ans = 0;
    map<long long, long long> pre;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == k)
            ans++;
        if (pre.find(sum - k) != pre.end())
        {
            ans += pre[sum - k];
        }
        pre[sum]++;
    }
    cout << ans << endl;
    return 0;
}