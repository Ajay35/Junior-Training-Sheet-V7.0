/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x;
    cin >> x;
    int n = x.size();
    vector<int> nums(n);
    int digit_sum = 0;

    for (int i = 0; i < n; i++)
    {
        nums[i] = x[i] - '0';
        digit_sum += (x[i] - '0');
    }

    int cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int p = nums[i];
        nums[i] += (digit_sum - p);
        digit_sum -= p;
        cnt++;
    }

    int carry = 0;
    string ans;
    for (int i = n - 1; i >= 0; i--)
    {
        nums[i] += carry;
        if (nums[i] > 9)
        {
            carry = nums[i] / 10;
            nums[i] = nums[i] % 10;
        }
        else
            carry = 0;
        ans += (char)(nums[i] + '0');
    }

    if (carry > 0)
    {
        string app = to_string(carry);
        reverse(begin(app), end(app));
        ans += app;
    }
    while (ans.size() > 1 and ans.back() == '0')
    {
        ans.pop_back();
    }
    reverse(begin(ans), end(ans));
    cout << ans << endl;
    return 0;
}