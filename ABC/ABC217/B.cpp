#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if (s1 != "ABC" and s2 != "ABC" and s3 != "ABC")
    {
        cout << "ABC" << endl;
    }
    else if (s1 != "ARC" and s2 != "ARC" and s3 != "ARC")
    {
        cout << "ARC" << endl;
    }
    else if (s1 != "AGC" and s2 != "AGC" and s3 != "AGC")
    {
        cout << "AGC" << endl;
    }
    else if (s1 != "AHC" and s2 != "AHC" and s3 != "AHC")
    {
        cout << "AHC" << endl;
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