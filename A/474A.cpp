#include <bits/stdc++.h>

using namespace std;

char get_char(char c, char dir, vector<string> &temp)
{

    for (int i = 0; i < temp.size(); i++)
    {
        for (int j = 0; j < temp[i].size(); j++)
        {
            if (c == temp[i][j])
            {
                if (dir == 'R')
                {
                    if (j - 1 >= 0)
                        return temp[i][j - 1];
                    else
                        return c;
                }
                else
                {
                    if (j + 1 < temp[i].size())
                        return temp[i][j + 1];
                    else
                        return c;
                }
            }
        }
    }
    return ' ';
}

void solve()
{
    vector<string> temp(3);
    temp[0] = "qwertyuiop";
    temp[1] = "asdfghjkl;";
    temp[2] = "zxcvbnm,./";
    char d;
    cin >> d;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        cout << get_char(s[i], d, temp);
    }
    cout << endl;
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