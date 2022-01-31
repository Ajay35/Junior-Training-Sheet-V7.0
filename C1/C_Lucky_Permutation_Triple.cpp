/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    int n;
    cin >> n;
    
    if (n & 1)
    {
        
        for (int i = 0; i < n; i++)
            cout << i << " ";
        cout << endl;
        for (int i = 0; i < n; i++)
            cout << i << " ";
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << (i + i) % n << " ";
        }
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}