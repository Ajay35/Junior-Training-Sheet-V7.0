#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<char> res(n);
    res[0] = 'R';
    res[1] = 'O';
    res[2] = 'Y';
    res[3] = 'G';
    res[4] = 'B';
    res[5] = 'I';
    res[6] = 'V';
    for (int i = 7; i < n; ++i)
    {
        res[i] = res[i - 4];
    }
    for (int i = 0; i < n; i++)
        cout << res[i];
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