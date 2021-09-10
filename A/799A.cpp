#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int without_second_oven = (n / k) * t + (((n % k) > 0) * t);
    int with_second_oven = -1;
    int current_time = 1;
    while (with_second_oven == -1)
    {
        if (current_time > d)
        {
            int total_cakes = (current_time / t) * k + ((current_time - d) / t) * k;
            if (total_cakes >= n)
            {
                with_second_oven = current_time;
                break;
            }
        }
        current_time++;
    }
    if (with_second_oven < without_second_oven)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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