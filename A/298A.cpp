#include <bits/stdc++.h>

using namespace std;

void solve()
{
    size_t n;
    string s;
    cin >> n >> s;

    for (size_t i = 0; i < n; ++i)
    {
        if (s[i] != '.')
        {
            if (s[i] == 'R')
            {
                while (s[i] == 'R')
                {
                    ++i;
                }
                cout << i << " " << i + 1 << endl;
            }
            else
            {
                cout << i + 1 << " " << i << endl;
            }
            break;
        }
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