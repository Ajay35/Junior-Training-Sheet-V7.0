#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int l, q;
    cin >> l >> q;
    set<int> cuts;

    cuts.insert(0);
    cuts.insert(l);

    for (int i = 0; i < q; i++)
    {
        int c, x;
        cin >> c >> x;
        if (c == 1)
        {
            cuts.insert(x);
        }
        else
        {
            int left = -1, right = -1;
            auto le = cuts.lower_bound(x);
            if (le == cuts.begin())
                left = 0;
            else
            {
                le--;
                left = *le;
            }

            auto ri = cuts.upper_bound(x);
            right = *ri;
            cout << right - left << endl;
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