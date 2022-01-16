/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int n = s.size();
    vector<int> evens;
    int smallest_even = 1e9;
    for (int i = 0; i + 1 < n; i++)
    {
        int d = s[i] - '0';
        if (d % 2 == 0)
        {
            evens.push_back(i);
            smallest_even = min(smallest_even, d);
        }
    }

    if (evens.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        int last = s[n - 1] - '0';
        if (smallest_even > s.back() - '0')
        {
            // in this case swap with even index which is closest to n - 1.
            swap(s[evens.back()], s[n - 1]);
        }
        else
        {
            // swap with the first even from lest that is smaller than last digit.
            int ind = -1;

            for (int i = 0; i < evens.size(); i++)
            {
                int dd = s[evens[i]] - '0';
                if (dd <= last)
                {
                    swap(s[evens[i]], s[n - 1]);
                    break;
                }
            }
        }
        cout << s << endl;
    }

    return 0;
}