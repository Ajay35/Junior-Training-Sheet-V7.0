/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int n, k;
    cin >> s >> k;
    n = s.size();
    for (int i = 0; i < min(i + k, n); i++)
    {
        int big_ind = -1;
        for (int j = i + 1; j <= min(n, i + k); j++)
        {
            if (s[j] > s[i])
            {
                if (big_ind == -1)
                    big_ind = j;
                else if (s[big_ind] < s[j])
                    big_ind = j;
            }
        }
        if (big_ind != -1)
        {

            int d = big_ind - i;
            k -= d;
            char c = s[big_ind];
            for (int j = big_ind; j > i; j--)
            {
                s[j] = s[j - 1];
            }
            s[i] = c;
        }
    }
    cout << s << endl;
    return 0;
}