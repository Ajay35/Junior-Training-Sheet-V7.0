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
    int n, k1, k2;
    cin >> n;
    cin >> k1;
    deque<int> p1;
    rep(i, 0, k1)
    {
        int x;
        cin >> x;
        p1.push_back(x);
    }
    cin >> k2;
    deque<int> p2;
    rep(i, 0, k2)
    {
        int x;
        cin >> x;
        p2.push_back(x);
    }
    int fights = 0;

    while (!p1.empty() and !p2.empty() and fights <= 1000)
    {
        if (p1.front() > p2.front())
        {
            p1.push_back(p2.front());
            p1.push_back(p1.front());
            p2.pop_front();
            p1.pop_front();
        }
        else
        {
            p2.push_back(p1.front());
            p2.push_back(p2.front());
            p2.pop_front();
            p1.pop_front();
        }
        fights++;
    }
    if (fights >= 1000)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << fights << " " << (p1.empty() ? 2 : 1) << endl;
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