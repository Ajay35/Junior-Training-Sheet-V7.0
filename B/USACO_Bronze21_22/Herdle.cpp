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
    int green = 0, yellow = 0;
    vector<string> guess(3);
    vector<string> ans(3);
    for (int i = 0; i < 3; i++)
        cin >> guess[i];
    for (int i = 0; i < 3; i++)
        cin >> ans[i];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (guess[i][j] == ans[i][j])
            {
                green++;
                guess[i][j] = '.';
                ans[i][j] = '.';
            }
        }
    }
    vector<int> rem_guess(26);
    vector<int> rem_ans(26);
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if (isalpha(guess[i][j]))
            {
                // x
                rem_guess[guess[i][j] - 'A']++;
            }
            if (isalpha(ans[i][j]))
            {
                // y
                rem_ans[ans[i][j] - 'A']++;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (rem_guess[i] != 0)
            yellow += min(rem_guess[i], rem_ans[i]);
    }
    cout << green << endl;
    cout << yellow << endl;

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