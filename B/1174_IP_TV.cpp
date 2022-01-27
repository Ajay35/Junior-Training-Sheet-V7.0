/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

vector<int> parent, sz;
int cnt = 0;
bool cmp(pair<int, pair<int, int>> &a, pair<int, pair<int, int>> &b)
{
    return a.first < b.first;
}

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
        cnt++;
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
        int n, m;
        cin >> n >> m;
        sz.resize(n + 1);
        parent.resize(n + 1);
        for (int i = 1; i <= n; i++)
        {
            make_set(i);
        }
        int id = 1;
        map<string, int> city;
        vector<pair<int, pair<int, int>>> edges;
        for (int i = 0; i < m; i++)
        {
            string c1, c2;
            int cost;
            cin >> c1 >> c2 >> cost;
            int c_id1 = -1, c_id2 = -1;
            if (city.find(c1) == city.end())
            {
                city[c1] = id;
                c_id1 = id;
                id++;
            }
            else
            {
                c_id1 = city[c1];
            }

            if (city.find(c2) == city.end())
            {
                city[c2] = id;
                c_id2 = id;
                id++;
            }
            else
            {
                c_id2 = city[c2];
            }
            edges.push_back({cost, {c_id1, c_id2}});
        }
        int ans = 0;
        cnt = 0;
        sort(begin(edges), end(edges), cmp);
        for (int i = 0; i < m; i++)
        {

            int u = edges[i].second.first;
            int v = edges[i].second.second;
            int c = edges[i].first;
            if (find_set(u) != find_set(v))
            {
                ans += c;
                union_sets(u, v);
                if (cnt == n - 1)
                    break;
            }
        }
        cout << ans << endl;
        if(t > 0)
            cout<<endl;
    }
    return 0;
}