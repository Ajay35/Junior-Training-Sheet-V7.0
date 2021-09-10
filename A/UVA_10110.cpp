#include <bits/stdc++.h>

using namespace std;

void solve()
{
    vector<bool> prime(65538, true);
    vector<int> primes;
    for (int i = 2; i * i <= 65537; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 65537; j += i)
                prime[j] = false;
        }
    }
    for (int i = 2; i <= 65537; i++)
    {
        if (prime[i])
            primes.push_back(i);
    }
    long long n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        map<int, int> factors;
        int b = 1;
        for (int i = 0; i < primes.size() and primes[i] <= n; i++)
        {
            int c = 0;
            while (n % primes[i] == 0)
            {
                n = n / primes[i];
                c++;
            }
            b *= (c + 1);
        } 
        if (n > 1)
            b *= 2;
        if (b & 1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
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