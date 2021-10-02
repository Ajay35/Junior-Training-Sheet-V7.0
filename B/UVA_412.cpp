#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        double total_pairs = (double)(n * (n - 1)) / 2;
        double pairs = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (gcd(a[i], a[j]) == 1)
                {
                    pairs++;
                }
            }
        }
        if (pairs == 0)
            cout << "No estimate for this data set." << endl;
        else
            cout << fixed<<setprecision(6)<< sqrt((total_pairs * 6) /pairs) << endl;
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