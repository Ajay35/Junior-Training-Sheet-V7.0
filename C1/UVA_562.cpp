
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

void solve()
{

    long long n;
    cin >> n;
    long long arr[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    long long summ = sum / 2;
    bool t[n + 1][summ + 1];
    for (int i = 0; i < n + 1; i++)
        t[i][0] = true;
    for (int i = 1; i < summ + 1; i++)
        t[0][i] = false;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < summ + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
            }
            else
                t[i][j] = t[i - 1][j];
        }

    }

    long long j = summ;
    while (t[n][j] != true)
    {
        j--;
    }


    long long ans = j;
    cout << sum - (2 * ans) << endl;
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

