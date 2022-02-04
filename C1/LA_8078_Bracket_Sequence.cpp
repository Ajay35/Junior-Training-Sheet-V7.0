
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

void solve(int c)
{
    string s;
    cin >> s;
    int n = sz(s);
    vi dp(n);
    stack<int> st;
    rep(i, 0, n)
    {
        if (s[i] == '(' or s[i] == '{' or s[i] == '<' or s[i] == '[')
        {
            st.push(i);
        }
        else if (!st.empty() and ((s[i] == ')' and s[st.top()] == '(') or (s[i] == ']' and s[st.top()] == '[') or (s[i] == '}' and s[st.top()] == '{') or (s[i] == '>' and s[st.top()] == '<')))
        {
            int tp = st.top();
            dp[tp] = max(dp[tp], i - tp + 1);
            st.pop();
        }
        else
        {
            while (!st.empty())
            {
                st.pop();
            }
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (i + dp[i] < n)
            dp[i] += dp[i + dp[i]];
    }

    cout << "Case " << c << ":" << endl;
    rep(i, 0, n)
    {
        cout << dp[i] << endl;
    }

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    int c = 1;
    while (t--)
    {
        solve(c++);
    }
    return 0;
}

