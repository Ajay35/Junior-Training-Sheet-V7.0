/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

double dist(double x1, double y1, double x2, double y2)
{
    return sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<double, double> > points(n);
    for (int i = 0; i < n; i++)
    {
        cin >> points[i].first >> points[i].second;
    }

    double dis = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            dis = max(dis, dist(points[i].first, points[i].second, points[j].first, points[j].second));
        }
    }
    cout << fixed << setprecision(10) << dis << endl;
    return 0;
}