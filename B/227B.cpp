#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m;
    cin >> n;
    map<int, int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums[x] = i + 1;
    }
    cin >> m;
    long long vasya = 0, petya = 0;
    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        int pos = nums[num];
        vasya += pos;
        petya += (n - pos + 1);
    }
    cout << vasya << " " << petya << endl;
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