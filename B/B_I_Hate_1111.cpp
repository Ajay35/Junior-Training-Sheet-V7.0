/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int st = 11;
    vector<int> nums;
    while (st < 1e9)
    {
        nums.push_back(st);
        st = st * 10 + 1;
    }
    while (t--)
    {
        int n;
        cin >> n;
        bool found = false;
        for (int x = 0; x < 20; x++)
        {
            if (n % 11 == 0)
            {
                found = true;
                break;
            }

            n -= 111;
            if (n < 0)
                break;
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}