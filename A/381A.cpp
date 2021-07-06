#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, s = 0, d = 0;
    bool ser = true;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (a[l] < a[r])
        {
            if (ser)
                s += a[r];
            else
                d += a[r];
            r--;
        }
        else
        {
            if (ser)
                s += a[l];
            else
                d += a[l];
            l++;
        }

        ser = !ser;
    }
    cout << s << " " << d << endl;
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