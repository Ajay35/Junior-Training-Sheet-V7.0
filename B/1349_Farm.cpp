/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    if (n == 1)
        cout << "1 2 3" << endl;
    else if (n == 2)
        cout << "4 5 6" << endl;
    else
        cout << -1 << endl;
    return 0;
}