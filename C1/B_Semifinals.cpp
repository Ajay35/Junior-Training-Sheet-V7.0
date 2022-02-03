
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

struct remain
{
    int score, semi, ind;
};

bool cmp(remain a, remain b)
{
    return a.score < b.score;
}
void solve()
{
    int n;
    cin >> n;
    vii a(n);
    rep(i, 0, n)
    {
        cin >> a[i].x >> a[i].y;
    }

    vector<remain> temp;

    vi ans1(n), ans2(n);
    
    int k = n / 2;

    // handle k top players case
    rep(i, 0, k)
    {
        ans1[i] = 1;
        ans2[i] = 1;
    }

    // handle k = 0 case..
    rep(i, 0, n)
    {
        temp.pb({a[i].x, 1, i});
        temp.pb({a[i].y, 2, i});
    }

    sort(all(temp), cmp);
    int i = 0;
    int rem = n;
    while(i < sz(temp) and rem > 0)
    {
        int ind = temp[i].ind;
        int semi = temp[i].semi;
        if(semi == 1)
            ans1[ind] = 1;
        else
            ans2[ind] = 1;
        rem--;
        i++;
    }
    
    rep(i, 0, n)
    {
        cout << ans1[i];
    }
    cout << endl;
    rep(i, 0, n)
    {
        cout << ans2[i];
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

