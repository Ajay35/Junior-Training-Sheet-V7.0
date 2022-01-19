/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int dis(int x1, int y1, int x2, int y2)
{
    return ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
}

bool cmp(pair<int, pair<int, int> > a, pair<int, pair<int, int> > b)
{
    return a.first < b.first;
}

vector<int> parent, rnk;
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n;
        parent.resize(n + 1);
        rnk.resize(n + 1);
        cnt = 0;
        for (int i = 1; i <= n; i++)
            make_set(i);
        vector<pair<int, int> > co_ordinates;
        for (int i = 0; i < n; i++)
        {
            int a, b, c;
            cin >> a >> b;
            co_ordinates.push_back(make_pair(a, b));
        }
        vector<pair<int, pair<int, int> > > edges;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int x1 = co_ordinates[i].first;
                int y1 = co_ordinates[i].second;
                int x2 = co_ordinates[j].first;
                int y2 = co_ordinates[j].second;
                edges.push_back(make_pair(dis(x1, y1, x2, y2), make_pair(i + 1, j + 1)));
            }
        }

        sort(begin(edges), end(edges), cmp);
        cin >> m;

        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            union_sets(a, b);
        }
        if(cnt == n - 1)
        {
            cout<<"No new highways need"<<endl;
        }
        else
        {
            for (int i = 0; i < edges.size(); i++)
            {
                int u = edges[i].second.first;
                int v = edges[i].second.second;
                if (find_set(u) != find_set(v))
                {
                    union_sets(u, v);
                    cout<<u<<" "<<v<<endl;
                }
            }
        }
        if(t)
            cout<<endl;
    }
    return 0;
}