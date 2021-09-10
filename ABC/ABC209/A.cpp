#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int A, B;
    cin >> A >> B;
    if (A <= B)
        cout << B - A + 1 << endl;
    else
        cout << 0 << endl;
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