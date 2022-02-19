
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

bool possible;
int arr[5];
bool vis[5];

void f(int i, int res, int c)
{
    if (c == 5)
    {
        if (res == 23)
        {
            possible = true;
        }
        return;
    }

    for (int k = 0; k < 5; k++)
    {
        if (!vis[k])
        {
            vis[k] = true;
            f(k, res - arr[k], c + 1);
            f(k, res + arr[k], c + 1);
            f(k, res * arr[k], c + 1);
            vis[k] = false;
        }
    }
}

void solve()
{
    int a, b, c, d, e;
    while (cin >> a >> b >> c >> d >> e)
    {
        if (a == 0 and b == 0 and c == 0 and d == 0 and e == 0)
        {
            break;
        }

        possible = false;
        memset(vis, false, sizeof vis);

        arr[0] = a; arr[1] = b; arr[2] = c; arr[3] = d; arr[4] = e;

        for (int i = 0; i < 5; i++)
        {
            if (!vis[i])
            {
                vis[i] = true;
                f(i, arr[i], 1);
                vis[i] = false;
            }
        }

        if (possible)
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}

