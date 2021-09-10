#include <bits/stdc++.h>

using namespace std;
int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool is_leap(int yr)
{
    if ((yr % 4 == 0) && (yr % 100 != 0))
        return 1;
    else if (yr % 400 == 0)
        return 0;
    return 0;
}
class record
{
public:
    int d, m, y, c;
    record(int dd, int mm, int yy, int cc)
    {
        d = dd;
        m = mm;
        y = yy;
        c = cc;
    }
    bool consecutive(record r)
    {
        int pd = r.d;
        int pm = r.m;
        int py = r.y;
        pd++;
        if (pm != 2)
        {
            // all other months than feb
            if (pd > months[pm - 1])
            {
                pd = 1;
                pm++;
                if (pm > 12)
                {
                    pm = 1;
                    py++;
                }
            }
        }
        else
        {
            if (pd > months[1] + is_leap(py))
            {
                pd = 1;
                pm++;
            }
        }
        if (pd == d and pm == m and py == y)
            return true;
        return false;
    }
};
void solve()
{
    int n, d, m, y, c;
    while (cin >> n)
    {
        vector<record> records;
        if (n == 0)
            break;
        for (int i = 0; i < n; i++)
        {
            cin >> d >> m >> y >> c;
            records.push_back(record(d, m, y, c));
        }
        int days = 0, sum = 0;
        for (int i = 1; i < n; i++)
        {
            if (records[i].consecutive(records[i - 1]))
            {
                days++;
                sum += records[i].c - records[i - 1].c;
            }
        }
        cout << days << " " << sum << endl;
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