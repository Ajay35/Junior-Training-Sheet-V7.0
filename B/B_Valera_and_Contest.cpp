/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, l, r, s_all, s_k;
    cin >> n >> k >> l >> r >> s_all >> s_k;

    vector<int> ans(n);
    int kk = s_k / k;
    int rem_k = s_k % k;
    for (int i = 0; i < k; i++)
        ans[i] = kk;
    int ind = 0;
    while (rem_k > 0)
    {
        ans[ind++] += 1;
        rem_k--;
        ind = ind % k;
    }
    if(n - k > 0)
    {
        int rem_p = (s_all - s_k) / (n - k);
        int rem_pp = (s_all - s_k) % (n - k);
        for (int i = k; i < n; i++)
            ans[i] = rem_p;
        ind = k;
        while (rem_pp > 0)
        {
            ans[ind++] += 1;
            rem_pp--;
            if (ind == n)
                ind = n;
        }
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    return 0;
}