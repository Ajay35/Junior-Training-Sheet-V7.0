#include <bits/stdc++.h>

using namespace std;

bool intersect(int x1, int x2, int y1, int y2)
{
    return (x1 >= y1 && x1 <= y2) ||
           (x2 >= y1 && x2 <= y2) ||
           (y1 >= x1 && y1 <= x2) ||
           (y2 >= x1 && y2 <= x2);
}

void solve()
{
    int p, q, l, r;
    cin >> p >> q >> l >> r;
    int len = 0;
    vector<int> a(5001), b(5001);
    vector<pair<int, int> > ex(q), zed(p);
    for (int i = 0; i < p; i++)
    {
        cin >> zed[i].first >> zed[i].second;
        len += (zed[i].second - zed[i].first + 1);
    }
    for (int i = 0; i < q; i++)
    {
        cin >> ex[i].first >> ex[i].second;
    }
    int ans = 0;

    for (int j = l; j <= r; j++)
    {
        bool pos = false;

        for (int i = 0; i < p; i++)
        {
            for (int k = 0; k < q; k++)
            {
                int ex_x = ex[k].first + j;
                int ex_y = ex[k].second + j;
                if (intersect(zed[i].first, zed[i].second, ex_x, ex_y))
                {
                    ans++;
                    pos = true;
                    break;
                }
            }
            if (pos)
                break;
        }
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