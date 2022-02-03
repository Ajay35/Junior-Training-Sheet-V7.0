
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

const int N = 10000000;

void solve()
{
    vector<bool> prime(N + 10, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= N; i++)
    {
        if (prime[i] and (long long)i * i <= N)
        {
            for (int j = i * i; j <= N; j += i)
            {
                prime[j] = false;
            }
        }
    }

    int n;
    while (cin >> n)
    {
        int n1 = n / 2;
        int n2 = n / 2;
        if (n & 1)
            n2++;
        if (n1 > n2)
            swap(n1, n2);
        if (n1 % 2 == 1 or n2 % 2 == 1)
        {
            if (n1 & 1)
            {
                n1--;
                n2++;
            }
            else
            {
                n1++;
                n2--;
            }
        }
        if (n1 <= 2 or n2 <= 2)
        {
            cout << "Impossible" << endl;
        }
        else
        {
            vi ans(4);
            for (int i = 2; i <= n1 / 2; i++)
            {
                if (prime[i] and n1 - i > 0 and prime[n1 - i])
                {
                    ans[0] = i;
                    ans[1] = n1 - i;
                }
            }
            for (int i = 2; i <= n2 / 2; i++)
            {
                if (prime[i] and n2 - i > 0 and prime[n2 - i])
                {
                    ans[2] = i;
                    ans[3] = n2 - i;
                }
            }
            for (int i = 0; i < 4; i++)
                cout << ans[i] << " ";
            cout << endl;

        }
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

