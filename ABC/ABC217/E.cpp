#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long Q, X, Y; cin >> Q;
	multiset<int> st;
	deque<int> dq;
	while (Q--)
	{
		cin >> X;
		if (X == 1)
			cin >> Y, dq.push_back(Y);
		else if (X == 2)
		{
			if (st.size())
				cout << *st.begin() << "\n", st.erase(st.begin());
			else
				cout << dq.front() << "\n",dq.pop_front();
		}
		else
		{
			while (dq.size())
				st.insert(dq.back()), dq.pop_back();
		}
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