/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int get_difference(vector<int> &a, vector<int> &b)
{
    int ans = 0;
    for (int i = 0; i < 26; i++)
        ans += abs(a[i] - b[i]);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    vector<int> a(26), b(26);
    for (int i = 0; i < n; i++)
        a[s[i] - 'a']++;
    for (int i = 0; i < m; i++)
        b[t[i] - 'a']++;
    bool aut = false;
    bool sa = false;
    if (n != m)
    {
        aut = true;
        // check if t is subsequence of s, then we dont need suffix array
        int i, j;
        for (i = 0, j = 0; i < n; i++)
        {
            if (j < m and s[i] == t[j])
            {
                j++;
            }
        }
        // count common characters in s and t.

        if (j < m)
            sa = true;
        int d = get_difference(a, b);
        if (d > (n - m))
        {
            cout << "need tree" << endl;
        }
        else if (aut and sa)
        {
            cout << "both" << endl;
        }
        else
        {
            cout << "automaton" << endl;
        }
    }
    else
    {
        int d = get_difference(a, b);
        if (d != 0)
        {
            cout << "need tree" << endl;
        }
        else
        {
            cout << "array" << endl;
        }
    }

    return 0;
}