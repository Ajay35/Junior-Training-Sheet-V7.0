#include <bits/stdc++.h>
using namespace std;

double dis(double x1, double y1, double x2, double y2)
{
    return sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
}
void solve()
{
    int n, k;
    cin >> n >> k;
    double ans = 0;
    vector<pair<double, double> > points(n);
    for (int i = 0; i < n; i++)
    {
        cin >> points[i].first >> points[i].second;
        if (i > 0)
        {
            double d = dis(points[i - 1].first, points[i - 1].second, points[i].first, points[i].second);
            ans += d;
        }
    }
    double speed = 50;
    cout << fixed << setprecision(10) << ans / speed * k << endl;
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