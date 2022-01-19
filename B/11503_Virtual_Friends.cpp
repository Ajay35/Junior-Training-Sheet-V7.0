/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

vector<int> parent, sz;

void make_set(int v)
{
    parent[v] = v;
    sz[v] = 1;
}

int find_set(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (sz[a] < sz[b])
            swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        parent.resize(100000 + 1);
        sz.resize(100000 + 1);
        int cnt = 1;
        for (int i = 1; i <= 100000; i++)
        {
            make_set(i);
        }
        map<string, int> friend_id;
        for (int i = 0; i < n; i++)
        {
            string a, b;
            cin >> a >> b;
            int a_id = -1, b_id = -1;
            if (friend_id.find(a) == friend_id.end())
            {
                friend_id[a] = cnt++;
            }
            if (friend_id.find(b) == friend_id.end())
            {
                friend_id[b] = cnt++;
            }
            a_id = friend_id[a];
            b_id = friend_id[b];
            union_sets(a_id, b_id);
            cout << sz[find_set(a_id)] << endl;
        }
    }
    return 0;
}