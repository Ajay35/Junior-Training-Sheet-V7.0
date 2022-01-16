/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, double> p1, pair<int, double> p2)
{
    if (p1.second == p2.second)
        return p1.first < p2.first;
    return p1.second > p2.second;
}

double get_height(double a, double b, int t1, int t2, int k)
{
    double kk = k;
    double h1 = (a * t1 * ((100 - kk) / 100.0)) + (b * t2);
    double h2 = (b * t1 * ((100 - kk) / 100.0)) + (a * t2);
    return max(h1, h2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t1, t2, k;
    cin >> n >> t1 >> t2 >> k;
    vector<pair<double, double>> seeds(n);
    for (int i = 0; i < n; i++)
    {
        cin >> seeds[i].first >> seeds[i].second;
    }
    vector<pair<int, double>> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[i].first = i + 1;
        ans[i].second = get_height(seeds[i].first, seeds[i].second, t1, t2, k);
    }
    cout << fixed << setprecision(2);
    sort(begin(ans), end(ans), cmp);
    for (int i = 0; i < n; i++)
        cout << ans[i].first << " " << ans[i].second << endl;
    return 0;
}