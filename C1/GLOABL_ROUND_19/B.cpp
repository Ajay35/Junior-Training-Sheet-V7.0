
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

const int N = 101;

int a[N];

int smallest_not_set(int l, int r)
{
    map<int, int> vis;
    for (int i = l; i <= r; i++)
    {
        vis[a[i]] = 1;
    }
    int val = -1;
    for (int i = 0; i <= 100; i++)
    {
        if (vis[i] == 0)
        {
            val = i;
            break;
        }
    }
    return val;
}

int f(int l, int r)
{
    if (l == r)
    {
        return smallest_not_set(l, r);
    }
    int ans = smallest_not_set(l, r);
    int ans1  = 0;
    for (int i = l; i < r; i++)
    {
        int t1 = 1 + f(l, i) + f(i + 1, r);
        ans1 = max(ans1, t1);
    }
    return ans + ans1;
}

void solve()
{
    int n;

    cin >> n;
    rep(i, 0, n)
    {
        cin >> a[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int temp = f(i, j);
            cout << i << " " << j << " " << temp << endl;
            ans += temp;
        }
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

