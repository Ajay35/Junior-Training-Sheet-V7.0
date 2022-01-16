/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    vector<int> a(3);
    a[0] = s[0] - '0';
    a[1] = s[1] - '0';
    a[2] = s[2] - '0';
    int x = (a[0] * 100) + (a[1] * 10) + (a[2]);
    int y = (a[1] * 100) + (a[2] * 10) + (a[0]);
    int z = (a[2] * 100) + (a[0] * 10) + (a[1]);
    cout << x + y + z << endl;
    return 0;
}