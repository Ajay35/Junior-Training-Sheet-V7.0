#include <bits/stdc++.h>
using namespace std;
 
bool anyone_winner(string s)
{
    bool row = (s[0] != '.' && s[0] == s[1] && s[1] == s[2]) ||
               (s[3] != '.' && s[3] == s[4] && s[4] == s[5]) ||
               (s[6] != '.' && s[6] == s[7] && s[7] == s[8]);
 
    bool clm = (s[0] != '.' && s[0] == s[3] && s[3] == s[6]) ||
               (s[1] != '.' && s[1] == s[4] && s[4] == s[7]) ||
               (s[2] != '.' && s[2] == s[5] && s[5] == s[8]);
    bool dig = (s[0] != '.' && s[0] == s[4] && s[4] == s[8]) ||
               (s[2] != '.' && s[2] == s[4] && s[4] == s[6]);
    return row || clm || dig;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string board;
        string ans = "no";
        for (int i = 0; i < 3; i++)
        {
            string row;
            cin >> row;
            board += row;
        }
        string start = ".........";
        queue<pair<string, int>> que;
        que.push({start, 1});
        while (!que.empty())
        {
            pair<string, int> fr = que.front();
            que.pop();
            string cur = fr.first;
            int turn = fr.second;
 
            if (cur == board)
            {
                ans = "yes";
                break;
            }
            if (anyone_winner(cur)) continue;
            for (int i = 0; i < 9; i++)
            {
                if (cur[i] == '.')
                {
                    cur[i] = turn ? 'X' : 'O';
                    if (cur[i] == board[i])
                        que.push({cur, turn ^ 1});
                    cur[i] = '.';
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
} 