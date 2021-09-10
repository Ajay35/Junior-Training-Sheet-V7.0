#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> mono(n), poly(m);
    for (int i = 0; i < n; i++)
        cin >> mono[i];
    for (int i = 0; i < m; i++)
        cin >> poly[i];
    int i = 0, j = 0;
    vector<int> ans(n + m);
    int ind = 0;
    while(i < n or j < m)
    {
        while(i < n and mono[i] <=k)
        {
            if(mono[i] ==0)
                k++;
            ans[ind++] = mono[i++];
        }

        while(j < m and poly[j] <=k)
        {
            if(poly[j] == 0)
                k++;
            ans[ind++] = poly[j++];
        }
        if(i < n and mono[i] > k and j < m and poly[j] > k)
        {
            cout<<-1<<endl;
            return;
        }
        else if(i >= n and j < m and poly[j] > k)
        {
            cout<<-1<<endl;
            return;
        }
        else if(j >= m and i < n and mono[i] > k)
        {
            cout<<-1<<endl;
            return;
        }
    }
    for(int i = 0; i < n + m; i++)
        cout<<ans[i]<<" ";
    cout<<endl;
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