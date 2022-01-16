/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l, r;
    string s;
    cin >> l >> r;
    cin >> s;
    l--;
    r--;
    while (l < r)
    {
        swap(s[l++], s[r--]);
    }
    cout << s << endl;
    return 0;
}