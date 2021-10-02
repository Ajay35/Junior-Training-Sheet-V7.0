#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    if (s.size() >= 4)
    {
        cout << "NO" << endl;
    }
    else if (s.size() == 1)
    {
        cout << "YES" << endl;
    }
    else if (s.size() == 2)
    {
        cout << "YES" << endl;
    }
    else if (s.size() == 3)
    {
        int p = *(s.begin());
        s.erase(s.begin());
        int q = *(s.begin());
        s.erase(s.begin());
        int r = *(s.begin());
        if (p + r == 2 * q)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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