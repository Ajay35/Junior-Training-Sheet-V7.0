/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, y, q, w;
    cin >> n >> x >> y;
    set<pair<int, int> > slps;
    for(int i = 0; i < n; i++)
    {
        cin >> q >> w;
        int g = gcd((y - w), (x - q));
        slps.insert(make_pair((y - w) / g, (x - q) / g));
    }
    cout << slps.size() << endl;
    return 0;
}