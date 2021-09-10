#include <bits/stdc++.h>

using namespace std;

void solve()
{
    vector<vector<char> > board(4, vector<char>(4));
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> board[i][j];
        }
    }

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            int cnt_black = (board[i][j] == '#') + (board[i - 1][j] == '#') + (board[i][j - 1] == '#') + (board[i - 1][j - 1] == '#');
            int cnt_white = (board[i][j] == '.') + (board[i - 1][j] == '.') + (board[i][j - 1] == '.') + (board[i - 1][j - 1] == '.');
            if (cnt_white >= 3 or cnt_black >= 3)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
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