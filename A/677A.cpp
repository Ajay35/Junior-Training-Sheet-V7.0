#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char **argv)
{
    int n, h;
    cin >> n >> h;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > h)
            ans += 2;
        else
            ans += 1;
    }
    cout << ans << endl;
    return 0;
}