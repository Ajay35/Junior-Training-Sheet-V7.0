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

bool palindrome(string s)
{
    int l = 0;
    int r = s.size() - 1;
    while (l < r)
    {
        if (s[l] == s[r])
        {
            l++;
            r--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    if (palindrome(s))
    {
        cout << "Yes" << endl;
    }
    else
    {
        int r = n - 1;
        int l = 0;

        int cnt = 0;
        while (r >= 0 and s[r] == 'a')
        {
            r--;
            cnt++;
        }
        while(l < r and s[l] == 'a')
        {
            cnt--;
            l++;
        }
        string con;
        for (int i = 0; i < cnt; i++)
            con += 'a';
        if (palindrome(con + s))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }

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