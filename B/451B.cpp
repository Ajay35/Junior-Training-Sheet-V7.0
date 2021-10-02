#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = n - 1;
    while (l + 1 < n and a[l] < a[l + 1])
        l++;
    while (r - 1 >= 0 and a[r] > a[r - 1])
        r--;
    if (l == n - 1 and r == 0)
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
    }
    else
    {
        if (l > r)
            swap(l, r);
        int ll = l, rr = r;
        while (ll < rr)
        {
            swap(a[ll], a[rr]);
            ll++;
            rr--;
        }
        if (is_sorted(begin(a), end(a)))
        {
            cout << "yes" << endl;
            cout << l + 1 << " " << r + 1 << endl;
        }
        else
        {
            cout << "no" << endl;
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