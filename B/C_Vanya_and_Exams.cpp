/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

bool cmp(vector<long long> &a, vector<long long> &b)
{
    return a[1] < b[1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, r, avg;
    cin >> n >> r >> avg;
    long long total = avg * n;
    vector<vector<long long>> exams;
    long long sum = 0;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        long long x, y;
        cin >> x >> y;
        if (x < r)
        {
            exams.push_back({x, y});
        }
        sum += x;
    }
    total -= sum;
    sort(begin(exams), end(exams), cmp);
    for (int i = 0; i < exams.size(); i++)
    {
        if (total > 0)
        {
            long long rem = r - exams[i][0];
            rem = min(total, rem);
            ans += rem * exams[i][1];
            total -= rem;
        }
        else
            break;
    }
    cout << ans << endl;
    return 0;
}