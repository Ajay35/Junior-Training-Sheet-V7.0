/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int get_num(int x)
{
    int t = x;
    int ten = 0;
    while (t >= 1)
    {
        t = t / 10;
        ten++;
    }
    int last_digit = x % 10;
    int con = last_digit * pow(10, ten - 1) + (x / 10);
    ;
    return con;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, n;
    cin >> a >> n;
    queue<pair<int, int>> que;
    que.push(make_pair(1, 0));
    map<int, int> vis;
    vis[1] = 1;
    bool possible = false;
    int ans = -1;
    while (!que.empty())
    {
        pair<int, int> cur = que.front();
        que.pop();
        if (cur.first == n)
        {
            possible = true;
            ans = cur.second;
            break;
        }
        int new_num1 = cur.first * a;
        if (new_num1 <= 1e6 and vis.find(new_num1) == vis.end())
        {
            que.push(make_pair(new_num1, cur.second + 1));
            vis[new_num1] = 1;
        }

        if (cur.first > 9 and cur.first % 10 != 0)
        {
            int new_num2 = get_num(cur.first);
            if (new_num2 <= 1e6 and vis.find(new_num2) == vis.end())
            {
                que.push(make_pair(new_num2, cur.second + 1));
                vis[new_num2] = 1;
            }
        }
    }
    if (possible)
        cout << ans << endl;
    else
        cout << -1 << endl;
    return 0;
}