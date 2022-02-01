
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

const int N = 20000000;

void solve()
{
    vii twin_pairs;
    vector<bool> prime(N + 10, true);
    prime[0] = prime[1] = false;

    for(int i = 2; i <= N; i++)
    {
        if (prime[i] and (long long)i * i <= N)
        {
            for (int j = i * i; j <= N; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= N; i++)
    {
        if (prime[i] and i + 2 <= N and prime[i + 2])
        {
            twin_pairs.pb({i, i + 2});
        }
    }
    int n;
    while (cin >> n)
    {
        cout << "("<<twin_pairs[n - 1].x<<", "<<twin_pairs[n - 1].y << ")"<<endl;
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

