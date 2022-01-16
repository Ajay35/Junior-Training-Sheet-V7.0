/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

bool dfs(int u, int up, int upp, map<int, set<int>>& friends, vector<bool>& vis)
{
    vis[u] = true;
    if(up != -1 and upp != -1)
    {
        if(friends[upp].find(u) == friends[upp].end())
            return false;
    }
    for(int v: friends[u])
    {
        if(!vis[v] and !dfs(v, u, up, friends, vis))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    map<int, set<int> > friends;
    vector<bool> vis(n + 1, false);
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin>>u>>v;
        friends[u].insert(v);
        friends[v].insert(u);
    }   

    for(int i = 1; i <= n; i++)
    {
        if(!vis[i] and !dfs(i, -1, -1, friends, vis))
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}