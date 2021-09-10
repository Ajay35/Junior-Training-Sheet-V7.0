#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    int x, y;
} Point;

void solve()
{
    Point a, b, c, d;
    int i, j, k, l;
    cin>>a.x>>a.y>>b.x>>b.y;
    cin>>c.x>>c.y>>d.x>>d.y;
    i = max(a.x, c.x);
    j = max(a.y, c.y);
    k = min(b.x, d.x);
    l = min(b.y, d.y);
    if (i >= k || j >= l)
        puts("No Overlap");
    else
        printf("%d %d %d %d\n", i, j, k, l);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        if (t)
        puts("");
    }
    return 0;
}