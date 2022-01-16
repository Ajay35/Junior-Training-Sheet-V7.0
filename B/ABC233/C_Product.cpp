/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int fun(int row, vector<vector<int> > &bag, long long x)
{
    //cout<<row<<endl;
    if (x == 1 and row == bag.size())
        return 1;
    if (row >= bag.size())
        return 0;
    int ans = 0;
    for (int col = 0; col < bag[row].size(); col++)
    {
        if ((x % bag[row][col]) == 0)
            ans += fun(row + 1, bag, x / bag[row][col]);
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, x;
    cin >> n >> x;
    vector<vector<int> > bag(n);
    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        for (int j = 0; j < l; j++)
        {
            int b;
            cin >> b;
            bag[i].push_back(b);
        }
    }
    cout << fun(0, bag, x) << endl;

    return 0;
}