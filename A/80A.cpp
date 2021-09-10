#include <bits/stdc++.h>

using namespace std;

int next_prime(int n)
{
    int primes[17] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};
    for (int i = 0; i < 17; i++)
    {
        if (primes[i] > n)
            return primes[i];
    }
    return -1;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    if (next_prime(n) == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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