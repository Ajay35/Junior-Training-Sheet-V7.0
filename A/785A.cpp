#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        string shape;
        cin >> shape;
        if (shape == "Tetrahedron")
            ans += 4;
        else if (shape == "Cube")
            ans += 6;
        else if (shape == "Octahedron")
            ans += 8;
        else if (shape == "Dodecahedron")
            ans += 12;
        else
            ans += 20;
    }
    cout << ans << endl;
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