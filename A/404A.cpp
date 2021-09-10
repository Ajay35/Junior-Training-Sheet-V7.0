#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    set<char> s;
    vector<vector<char> > b(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
            s.insert(b[i][j]);
        }
    }

    char c1 = b[0][0];
    char c2 = b[0][n - 1];
    int i1 = 0, j1 = 0, i2 = 0, j2 = n - 1;
    bool pos = true;
    while (i1 < n)
    {
        if (b[i1][j1] != c1)
        {
            pos = false;
            break;
        }
        if (b[i2][j2] != c2)
        {
            pos = false;
            break;
        }
        i1++;
        i2++;
        j1++;
        j2--;
    }
    int c1_c = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(b[i][j] == c1)
                c1_c++;
        }
    }
    if (!pos or s.size() != 2 or c1_c > (2 * n - 1))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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