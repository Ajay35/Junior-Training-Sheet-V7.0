/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

bool is_beautiful(string num)
{
    int cnt_ones = 0;
    int cnt_other = 0;
    int cnt_zeros = 0;
    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] == '1')
            cnt_ones++;
        else if (num[i] == '0')
            cnt_zeros++;
        else
            cnt_other++;
    }
    if (cnt_other > 0)
        return false;
    else if (cnt_ones > 1)
        return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<string> tanks(n);
    int len = 0;
    string non_beatiful = "1";
    for (int i = 0; i < n; i++)
    {
        cin >> tanks[i];
        if (tanks[i][0] == '0')
        {
            cout << 0 << endl;
            return 0;
        }
        if (!is_beautiful(tanks[i]))
        {
            non_beatiful = tanks[i];
        }
        else
        {
            len += tanks[i].size() - 1;
        }
    }
    for (int i = 0; i < len; i++)
    {
        non_beatiful += '0';
    }
    cout << non_beatiful << endl;
    return 0;
}