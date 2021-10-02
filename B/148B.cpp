#include <bits/stdc++.h>

using namespace std;

void solve()
{
    double vp, vd, t, f, c, distance;
    long bijous = 0;

    cin >> vp >> vd >> t >> f >> c;
    bijous = 0;

    if (vp < vd)
    {
        distance = vd * vp * t / (vd - vp);
        while (distance < c)
        {
            distance = vd * (distance + vp * (f + distance / vd)) / (vd - vp);
            ++bijous;
        }
    }

    cout << bijous << endl;
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