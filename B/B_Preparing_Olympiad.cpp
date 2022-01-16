/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                temp.push_back(a[j]);
            }
        }

        sort(begin(temp), end(temp));
        int sum = 0;
        for (int j = 0; j < temp.size(); j++)
        {
            sum += temp[j];
        }
        if (temp.size() > 1 and sum >= l and sum <= r and temp.back() - temp.front() >= x)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}