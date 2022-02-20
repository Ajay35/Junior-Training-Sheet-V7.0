
/* Ajay Jadhav */

#include <bits/stdc++.h>

#define ll          long long
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
#define vii         vector<pii>
#define mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define endl        '\n'
#define hell        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;

const int N = 1e3 + 74, OO = 0x3f3f3f3f, MOD = (int) 1e9 + 7;

vector<pair<int, int> > adj[N];

void solve()
{
    int com, budget;
    int numOfComp = 1;
    map<string, int> mp;
    cin >> com >> budget;
    for (int i = 0; i <= 1004; ++i)
    {
        adj[i].clear();
    }
    for (int i = 0; i < com; ++i) 
    {
        string s, t;
        int quality, price;
        cin >> s >> t >> price >> quality;
        if (mp.find(s) == mp.end())
        {
            mp[s] = numOfComp++;
        }
        adj[mp[s]].pb({price, quality});
    }
    for (int i = 1; i < numOfComp; i++)
    {
        sort(all(adj[i])); 
        for (int j = 1; j < sz(adj[i]); j++)
        {
            while (adj[i][j].y <= adj[i][j - 1].y && j < sz(adj[i]))
            {
                adj[i].erase(adj[i].begin() + j);
            }
        }
    }
    set<int> totQ ;
    for (int i = 1; i < numOfComp; i++)
    {
        for (int j = 0; j < sz(adj[i]); j++)
        {
            totQ.insert(adj[i][j].y);
        }
    }
    int idx[1005] = {}; // pointer in each components refer to current quality so far.
    int ans = -1;
    bool flag = false;
    for (auto i : totQ)
    {
        ll tot = 0;
        for (int j = 1; j < numOfComp; j++)
        {
            while (adj[j][idx[j]].y < i && idx[j] < sz(adj[j]))
            {
                idx[j]++;
            }
            if (idx[j] == sz(adj[j]))
            {   // break if I reach the end of any components because that is the maximum I will get
                flag = true;
                break;
            }
            tot += (ll) adj[j][idx[j]].x;
        }
        if (tot > budget || flag)
            break;
        ans = i;
    }
    cout << ans << endl;
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

