/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    if (s.size() < 26)
    {
        cout << -1 << endl;
        return 0;
    }
    int n = s.size();
    bool found = false;
    for (int i = 0; i + 25 < n; i++)
    {
        string sub = s.substr(i, 26);
        vector<int> a(26);
        for (int j = 0; j < 26; j++)
        {
            if (sub[j] != '?')
                a[sub[j] - 'A']++;
        }
        bool possible = true;
        for (int j = 0; j < 26; j++)
        {
            if (a[j] > 1)
            {
                possible = false;
                break;
            }
        }
        if (possible)
        {
            // fill in the missing character at question marks.
            found = true;
            vector<char> missing;
            int ind = 0;
            for (int j = 0; j < 26; j++)
            {
                if (a[j] == 0)
                {
                    char ch = (char)j + 'A';
                    missing.push_back(ch);
                }
            }
            for (int j = i; j < i + 26; j++)
            {
                if (s[j] == '?')
                {
                    s[j] = missing[ind++];
                }
            }
            // fill the remaining questions mark with any charater.
            for (int j = 0; j < n; j++)
            {
                if (s[j] == '?')
                    s[j] = 'A';
            }
            break;
        }
    }
    if (found)
        cout << s << endl;
    else
        cout << -1 << endl;
    return 0;
}