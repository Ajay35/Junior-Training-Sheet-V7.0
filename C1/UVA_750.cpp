
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
#define hell        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;


int columns[9];
vector<vector<int>> ans;


bool possible(int row, int col)
{
    vi v;
    for (int i = 1; i < col; i++)
    {
        int x1 = columns[i];
        int y1 = i;

        if (x1 == row or abs(x1 - row) == abs(y1 - col))
        {
            return false;
        }
    }
    return true;
}

void f(int col)
{
    if (col == 9)
    {
        vi v;
        for (int i = 1; i <= 8; i++)
            v.pb(columns[i]);
        ans.pb(v);
        return;
    }

    if (columns[col] != -1)
    {
        if (possible(columns[col], col))
            f(col + 1);
    }
    else
    {
        for (int j = 1; j <= 8; j++)
        {
            if (possible(j, col))
            {
                columns[col] = j;
                f(col + 1);
                columns[col] = -1;
            }
        }
    }
}


void solve(int t)
{
    int p, q;
    cin >> p >> q;
    memset(columns, -1, sizeof columns);
    columns[q] = p;
    ans.clear();
    f(1);

    cout << "SOLN" << "       " << "COLUMN" << endl;
    cout << " #" << "      1 2 3 4 5 6 7 8" << endl;
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {

        if (ans.size() <= 9)
            cout << " ";
        else if (ans.size() > 9 and i < 9)
            cout << " ";
        cout << i + 1 << "      ";
        for (int j = 0; j < ans[i].size(); j++)
        {

            cout << ans[i][j];
            if (j < 7)
                cout << " ";
        }
        cout << endl;
    }
    if(t)
        cout<<endl;
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
        solve(t);
    }
    return 0;
}

