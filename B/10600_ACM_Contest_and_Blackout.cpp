/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

vector<int> parent, rnk;
vector<bool> valid, used;
int cnt;

void make_set(int v)
{
    parent[v] = v;
    rnk[v] = 0;
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
        if (rnk[a] < rnk[b])
            swap(a, b);
        parent[b] = a;
        if (rnk[a] == rnk[b])
            rnk[a]++;
        cnt++;
    }
}

bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
    return a.first < b.first;
}

int get_plan(vector<pair<int, pair<int, int>>> edges, int n, int m, bool flag)
{
    for (int i = 1; i <= n; i++)
    {
        make_set(i);
    }
    cnt = 0;
    int s = 0;
    for (int i = 0; i < edges.size(); i++)
    {
        if (valid[i])
        {
            int u = edges[i].second.first;
            int v = edges[i].second.second;
            int w = edges[i].first;
            if (find_set(u) != find_set(v))
            {
                s += w;
                union_sets(u, v);
                if (flag)
                    used[i] = 1;
                if (cnt == n - 1)
                    break;
            }
        }
    }
    if (cnt != n - 1)
        return 1e9;
    return s;
}

int secondBestMst(vector<pair<int, pair<int, int>>> edges, int n, int m)
{
    int ans = 1e9;
    for (int i = 0; i < m; i++)
    {
        if (used[i])
        {
            valid[i] = 0;
            ans = min(ans, get_plan(edges, n, m, 0));
            valid[i] = 1;
        }
    }
    return ans;
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
        vector<pair<int, pair<int, int>>> edges(m + 1);
        for (int i = 0; i < m; i++)
        {
            cin >> edges[i].second.first >> edges[i].second.second >> edges[i].first;
        }
        sort(begin(edges), end(edges), cmp);
        used.assign(m, false);
        parent.resize(n + 1);
        valid.assign(m, true);
        rnk.resize(n + 1);
        int s1 = get_plan(edges, n, m, 1);
        cout << s1 << " " << secondBestMst(edges, n, m) << endl;
    }
    return 0;
}