/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    map<int, vector<int>> store;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        store[x].push_back(i + 1);
    }
    for (int i = 0; i < q; i++)
    {
        int x, k;
        cin >> x >> k;
        if (store[x].size() >= k)
        {
            cout << store[x][k - 1] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}