
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

void solve()
{
    string s, t;
    cin >> s >> t;
    vi b(256);
    rep(i, 0, sz(t))
    {
        b[t[i]]++;
    }
    int yay = 0, whoops = 0;
    rep(i, 0, sz(s))
    {
        if (b[s[i]] > 0)
        {
            b[s[i]]--;
            s[i] = '.';
            yay++;
        }
    }
    rep(i, 0, sz(s))
    {
        if (s[i] != '.')
        {
            if (isupper(s[i]))
            {
                char ch = (char) tolower(s[i]);
                if (b[ch] > 0)
                {
                    whoops++;
                    b[ch]--;
                }
            }
            else
            {
                char ch = (char) toupper(s[i]);
                if (b[ch] > 0)
                {
                    whoops++;
                    b[ch]--;
                }
            }
        }
    }
    cout << yay << " " << whoops << endl;
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

