#include <bits/stdc++.h>

using namespace std;

double total = 0;
double good = 0;

int get_pos(string s)
{
    int reach = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
            reach++;
        else
            reach--;
    }
    return reach;
}
void f(int i, int j, string &s1, string &s2, int to_reach, int reach)
{
    if (s2.size() == j)
    {
        total++;
        if (reach == to_reach)
            good++;
        return;
    }

    if (s2[j] != '?')
    {
        int val = (s2[j] == '+' ? 1 : -1);
        f(i + 1, j + 1, s1, s2, to_reach + val, reach);
    }
    else
    {
        f(i + 1, j + 1, s1, s2, to_reach + 1, reach);
        f(i + 1, j + 1, s1, s2, to_reach - 1, reach);
    }
}
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    int reach = get_pos(s1);

    f(0, 0, s1, s2, 0, reach);
    cout << fixed << setprecision(10) << (good / total) << endl;
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