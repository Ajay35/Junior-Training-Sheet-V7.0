#include <bits/stdc++.h>
using namespace std;

bool anyone_winner(string s)
{
    bool is_full = true;
    for (int i = 0; i < 9; i++)
    {
        if (s[i] == '.')
        {
            is_full = false;
            break;
        }
    }
    if (is_full)
        return is_full;
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
    string board;
    set<string> all_valid_states;
    string start = ".........";
    queue<pair<string, int> > que;
    que.push({start, 1});
    while (!que.empty())
    {
        pair<string, int> fr = que.front();
        que.pop();
        string cur = fr.first;
        int turn = fr.second;

        if (anyone_winner(cur))
            continue;
        for (int i = 0; i < 9; i++)
        {
            if (cur[i] == '.')
            {
                cur[i] = turn ? 'X' : 'O';
                if (all_valid_states.find(cur) == all_valid_states.end())
                {
                    all_valid_states.insert(cur);
                    que.push({cur, turn ^ 1});
                }
                cur[i] = '.';
            }
        }
    }
    while (cin >> board)
    {
        if (board == "end")
            break;
        if (all_valid_states.find(board) != all_valid_states.end() and anyone_winner(board))
            cout << "valid" << endl;
        else
            cout << "invalid" << endl;
    }
    return 0;
}