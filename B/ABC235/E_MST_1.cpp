#include <bits/stdc++.h>
using namespace std;
const int N = 4e5 + 5;
typedef pair<int, int> pii;
typedef long long LL;
int pre[N], ans[N];
int n, m, q;
vector<pii> G[N];
struct node
{
    int u, v, w, tag, idx;
} edges[N];
bool cmp(node a, node b)
{
    return a.w < b.w;
}
int findx(int x)
{
    return x == pre[x] ? pre[x] : pre[x] = findx(pre[x]);
}
bool merge(int a, int b)
{
    a = findx(a);
    b = findx(b);
    if (a != b)
    {
        pre[a] = b;
        return 1;
    }
    return 0;
}
void kruskal()
{
    int sum = 0;
    sort(edges + 1, edges + 1 + m, cmp);
    for (int i = 1; i <= m; i++)
    {
        int u = edges[i].u, w = edges[i].w, v = edges[i].v, tag = edges[i].tag, idx = edges[i].idx;
        if (tag == 0 && findx(u) != findx(v))
        {
            ans[idx] = 1;
            continue;
        }
        if (merge(u, v))
        {
            sum++;
            G[u].push_back({v, w});
            G[v].push_back({u, w});
        }
        if (sum == n - 1)
            return;
    }
}
void solve()
{

    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++)
        pre[i] = i;
    for (int i = 1; i <= m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edges[i] = {a, b, c, 1, 0};
    }

    for (int i = 1; i <= q; i++)
    {
        int u, v, w;
        cin>>u>>v>>w;
        edges[++m] = {u, v, w, 0, i};
    }
    kruskal();
    for (int i = 1; i <= q; i++)
    {
        if (ans[i])
            puts("Yes");
        else
            puts("No");
    }
}
int main()
{
    //cout<<turn(64)<<endl;
    int t = 1;
    //scanf("%d",&t);
    while (t--)
    {
        solve();
    }
}