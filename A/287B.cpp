#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll sum(ll n)
{
    return (n * (n + 1)) / 2;
}
ll sum(ll s, ll e)
{
    return sum(e) - sum(s - 1);
}

int BS(ll n, ll k)
{
    ll s = 1, e = k;
    while (s < e)
    {
        ll mid = (s + e) / 2;
        if (sum(mid, k) == n)
            return k - mid + 1;
        else if (sum(mid, k) > n)
            s = mid + 1;
        else
            e = mid;
    }
    return k - s + 2;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    k--;
    n--;
    if (n == 0)
        cout << 0;
    else if (k >= n)
        cout << 1;
    else if (sum(k) < n)
        cout << -1;
    else
        cout << BS(n, k);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}