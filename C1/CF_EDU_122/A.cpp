
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


int get_diff(int n1, int n2, int n)
{
	string sn = to_string(n);
	string sn1 = to_string(n1);
	string sn2 = to_string(n2);
	if (sz(sn) != sz(sn1))
		return n2;
	if (sz(sn) != sz(sn2))
		return n1;
	int c1 = 0, c2 = 0;
	for (int i = 0; i < sz(sn1); i++)
	{
		if (sn[i] != sn1[i])
			c1++;
	}
	for (int i = 0; i < sz(sn2); i++)
	{
		if (sn[i] != sn2[i])
			c2++;
	}
	if (c1 < c2)
		return n1;
	return n2;
}

void solve()
{
	int n;
	cin >> n;
	if (n < 10)
	{
		cout << 7 << endl;
		return;
	}
	if (n % 7 == 0)
	{
		cout << n << endl;
	}
	else
	{
		int m = n % 7;
		int n1 = n + (7 - m);
		int n2 = n - m;
		cout << get_diff(n1, n2, n) << endl;
	}
}

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}

