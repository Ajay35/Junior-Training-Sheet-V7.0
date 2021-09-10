#include <bits/stdc++.h>
using namespace std;

bool valid(char ch)
{
    bool ret = false;
    string s = "IEHOVA#";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ch)
        {
            ret = true;
            break;
        }
    }
    return ret;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char> > mat(n, vector<char>(m));
    vector<vector<bool> > vis(n, vector<bool>(m, false));
    int sx, sy, dx, dy;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            mat[i][j] = s[j];
            if (s[j] == '#')
            {
                dx = i;
                dy = j;
            }
            if (s[j] == '@')
            {
                sx = i;
                sy = j;
            }
        }
    }
    int ddx[3] = {-1, 0, 0};
    int ddy[3] = {0, 1, -1};
    queue<pair<pair<int, int>, string> > que;
    string ans = "";
    que.push(make_pair(make_pair(sx, sy), ""));
    while (!que.empty())
    {
        pair<pair<int, int>, string> cur = que.front();
        que.pop();
        vis[cur.first.first][cur.first.second] = true;
        if (cur.first.first == dx and cur.first.second == dy)
        {
            ans = cur.second;
            break;
        }
        for (int i = 0; i < 3; i++)
        {
            int newx = cur.first.first + ddx[i];
            int newy = cur.first.second + ddy[i];
            if (newx >= 0 and newx < n and newy >= 0 and newy < m and !vis[newx][newy] and valid(mat[newx][newy]))
            {
                char dir;
                if (i == 0)
                    dir = 'f';
                else if (i == 1)
                    dir = 'r';
                else
                    dir = 'l';
                que.push(make_pair(make_pair(newx, newy), cur.second + dir));
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] == 'l')
            cout << "left";
        else if (ans[i] == 'f')
            cout << "forth";
        else
            cout << "right";
        if (i < ans.size() - 1)
            cout << " ";
    }
    cout << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}