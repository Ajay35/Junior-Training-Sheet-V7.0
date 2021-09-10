#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    set<int> s;
    int nn = n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
        set<int>::iterator it = s.find(x);
        while (s.find(nn) != s.end())
        {
            cout << nn << " ";
            nn--;
        }
        cout << endl;
    }
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