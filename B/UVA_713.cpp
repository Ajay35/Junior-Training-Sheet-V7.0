#include <bits/stdc++.h>

using namespace std;

string get_sum(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);

    string str = "";

    int n1 = str1.length(), n2 = str2.length();

    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int carry = 0;
    for (int i = 0; i < n1; i++)
    {
        int sum = ((str1[i] - '0') + (str2[i] - '0') + carry);
        str.push_back(sum % 10 + '0');
        carry = sum / 10;
    }

    for (int i = n1; i < n2; i++)
    {
        int sum = ((str2[i] - '0') + carry);
        str.push_back(sum % 10 + '0');
        carry = sum / 10;
    }

    if (carry)
        str.push_back(carry + '0');

    return str;
}

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    reverse(begin(s1), end(s1));
    reverse(begin(s2), end(s2));
    string sum = get_sum(s1, s2);
    int ind = 0;
    while(ind + 1 < sum.size() and sum[ind] == '0')
        ind++;
    sum = sum.substr(ind);
    cout << sum << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}