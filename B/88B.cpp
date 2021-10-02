#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

typedef long long ll;

unordered_map<char, int> mark;
vector<pair<ll, ll> > v;

double mini(double a, double b)
{
    if (a >= b)
        return b;
    else
        return a;
}

int check(ll x, ll y, double mdis)
{
    double dis = double(1e9);

    for (ll i = 0; i < int(v.size()); i++)
    {
        ll t1 = (v[i].first - x);
        ll t2 = v[i].second - y;
        double d = sqrt(t1 * t1 + t2 * t2);

        if (d <= mdis)
            return -1;
    }
    return 1;
}

char convert(char c)
{
    if (c >= 'A' && c <= 'Z')
        return tolower(c);
    if (c >= 'a' && c <= 'z')
        return toupper(c);
}

int main()
{
    ios_base::sync_with_stdio(false);

    ll n, m;
    double x;
    cin >> n >> m;
    cin >> x;

    char arr[n + 1][m + 1];
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'S')
                v.push_back(make_pair(i, j));
            else
                mark[arr[i][j]] = 1;
        }
    }
    unordered_map<char, double> dis;

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            if (arr[i][j] >= 'a' && arr[i][j] <= 'z')
            {
                if (dis[arr[i][j]] == -1)
                    continue;
                dis[arr[i][j]] = check(i, j, x);
            }
        }
    }

    ll q;
    cin >> q;
    string s;
    cin >> s;
    ll ans = 0;

    for (ll i = 0; i < int(s.size()); i++)
    {
        if (mark[s[i]] != 1 && s[i] >= 'A' && s[i] <= 'Z' && mark[convert(s[i])] == 1 && int(v.size()) != 0)
        {
            if (dis[convert(s[i])] == 1)
                ans++;
        }
        else if (mark[s[i]] == 1)
            continue;
        else
        {
            cout << "-1" << endl;
            exit(0);
        }
    }
    cout << ans << endl;

    return 0;
}