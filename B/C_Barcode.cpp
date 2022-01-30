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

int sym1[1001][1001];
int sym2[1001][1001];
int dp[1001][1001][2];
int n, m, x, y;

int get_sum(int l, int r, int p)
{

    int d = sym1[n - 1][r] - (l >= 0 ? sym1[n - 1][l] : 0);
    int h = sym2[n - 1][r] - (l >= 0 ? sym2[n - 1][l] : 0);
    if (p)
        return h;
    return d;
}

int f(int cur, int prev, int p)
{
    if (cur == m - 1)
    {
        int sz = cur - prev;
        if (sz >= x and sz <= y)
            return get_sum(prev, cur, p);
        return 1e9;
    }


    int sz = cur - prev;
    int& ans = dp[cur][sz][p];
    if (ans == -1)
        ans = 1e9;
    else
        return ans;

    if (p)
    {
        // x size is ok, count that as one block or add one more column.
        if (sz + 1 <= y)
        {
            // two choices, choose a block of size x or continue adding row x + 1
            // 1. choose block of size x.
            ans = min(ans, get_sum(prev, cur, p) + f(min(cur + x, m - 1), cur, 1 - p));
            // 2. add one more block..
            ans = min(ans, f(min(cur + 1, m - 1), prev, p));
        }
        else
        {
            // size of block should not exceed y
            ans = min(ans, get_sum(prev, cur, p) + f(min(cur + x, m - 1), cur, 1 - p));
        }
    }
    else
    {
        if (sz + 1 <= y)
        {
            // two choices, choose a block of size x or continue adding row x + 1
            // 1. choose block of size x.
            ans = min(ans, get_sum(prev, cur, p) + f(min(cur + x, m - 1), cur, 1 - p));
            // 2. add one more block..
            ans = min(ans, f(min(cur + 1, m - 1), prev, p));
        }
        else
        {
            // size of block should not exceed y
            ans = min(ans, get_sum(prev, cur, p) + f(min(cur + x, m - 1), cur, 1 - p));
        }
    }

    return ans;
}

void solve()
{
    cin >> n >> m >> x >> y;
    vector<string> barcode(n);
    for (int i = 0; i < n; i++)
    {
        cin >> barcode[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i - 1 >= 0)
            {
                sym1[i][j] += sym1[i - 1][j];
                sym2[i][j] += sym2[i - 1][j];
            }
            if (j - 1 >= 0)
            {
                sym1[i][j] += sym1[i][j - 1];
                sym2[i][j] += sym2[i][j - 1];
            }
            if (i - 1 >= 0 and j - 1 >= 0)
            {
                sym1[i][j] -= sym1[i - 1][j - 1];
                sym2[i][j] -= sym2[i - 1][j - 1];
            }
            if (barcode[i][j] == '.')
            {
                sym1[i][j] += 1;
            }
            else
            {
                sym2[i][j] += 1;
            }
        }
    }

    memset(dp, -1, sizeof dp);
    cout << min(f(x - 1, -1, 0), f(x - 1, -1, 1)) << endl;

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