/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0;
    int ans = 0;
    multiset<int> window;
    for (int i = 0; i < n; i++)
    {
        window.insert(a[i]);
        while (l < i and (*(window.rbegin()) - *(window.begin())) > 1)
        {
            window.erase(window.find(a[l]));
            l++;
        }
        ans = max(ans, (int) window.size());
    }
    cout << ans << endl;
    return 0;
}