/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;

vector<int> BFS(string root)
{
    vector<int> tree;
    queue<string> q;
    q.push(root);
    string cur = root;
    int sz = 1;
    for (; !q.empty(); sz = q.size())
    {
        while (sz--)
        {
            cur = q.front();
            q.pop();
            if (mp.find(cur) != mp.end())
            {
                q.push(cur + "L");
                q.push(cur + "R");
                tree.push_back(mp[cur]);
            }
        }
    }
    return tree;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    while (cin >> s)
    {
        if (s != "()")
        {
            int i;
            string r, t = "";
            for (i = 1; s[i] != ','; i++)
                t += s[i];
            r = s.substr(i + 1, s.length() - i - 2);
            if (mp.find(r) == mp.end())
                mp[r] = stoi(t);
            else
                mp["X"] = 0;
        }
        else
        {
            vector<int> res = BFS("");
            if (res.size() == mp.size())
            {
                cout << res[0];
                for (int i = 1; i < res.size(); i++)
                    cout << " " << res[i];
            }
            else
            {
                cout << "not complete";
            }
            cout << endl;
            mp.clear();
        }
    }
    return 0;
}