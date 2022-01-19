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
bool cmp(pair<double, pair<int, int>> a, pair<double, pair<int, int>> b)
{
    return a.first < b.first;
}

double dis(double x1, double y1, double x2, double y2)
{
    return sqrt(((x2 - x1) * (x2 - x1)) + ((y1 - y2) * (y1 - y2)));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int s, p;
        cin >> s >> p;
        vector<pair<int, int>> pos(p);
        sz.resize(p + 1);
        parent.resize(p + 1);
        vector<pair<double, pair<int, int>>> edges;
        for (int i = 0; i < p; i++)
        {
            cin >> pos[i].first >> pos[i].second;
        }
        for (int i = 0; i < p; i++)
        {
            for (int j = i + 1; j < p; j++)
            {
                double x1 = pos[i].first;
                double y1 = pos[i].second;
                double x2 = pos[j].first;
                double y2 = pos[j].second;
                edges.push_back(make_pair(dis(x1, y1, x2, y2), make_pair(i + 1, j + 1)));
            }
        }
        sort(begin(edges), end(edges), cmp);
        vector<double> ans;
        for (int i = 1; i <= p; i++)
        {
            make_set(i);
        }
        for (int i = 0; i < edges.size(); i++)
        {
            int u = edges[i].second.first;
            int v = edges[i].second.second;
            double w = edges[i].first;
            if (find_set(u) != find_set(v))
            {
                union_sets(u, v);
                ans.push_back(w);
            }
        }
        sort(begin(ans), end(ans));
        int ans_size = ans.size();
        cout << fixed << setprecision(2) << ans[ans_size - s] << endl;
    }
    return 0;
}