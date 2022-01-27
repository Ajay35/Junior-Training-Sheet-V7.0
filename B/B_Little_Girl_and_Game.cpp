/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int odds = 0;
    int count[26] = {0};
    bool first = true;
    for (int i = 0; i < s.length(); i++)
    {
        count[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] % 2 == 1)
            odds++;
    }
    while (odds > 1)
    {
        odds--;
        first = !first;
    }
    if (first)
        cout << "First" << endl;
    else
        cout << "Second" << endl;
    return 0;
}