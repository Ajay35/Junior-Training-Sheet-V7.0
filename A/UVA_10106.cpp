#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s1, s2;
    while (cin >> s1 >> s2)
    {
        int n = s1.size();
        int m = s2.size();

        vector<int> ans(n + m);
        int i_n1 = 0;
        int i_n2 = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int carry = 0;
            i_n2 = 0;
            for (int j = m - 1; j >= 0; j--)
            {
                int sum = (s1[i] - '0') * (s2[j] - '0') + ans[i_n1 + i_n2] + carry;
                carry = sum / 10;
                ans[i_n1 + i_n2] = sum % 10;
                i_n2++;
            }
            if (carry > 0)
                ans[i_n1 + i_n2] = carry;
            i_n1++;
        }
        int i = n + m - 1;
        while (i > 0 and ans[i] == 0)
            i--;
        for (int j = i; j >= 0; j--)
        {
            cout << ans[j];
        }
        cout << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}