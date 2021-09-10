#include <bits/stdc++.h>

using namespace std;

int getNearest(int x, int y, int target)
{
    if (target - x >= y - target)
        return y;
    else
        return x;
}
int getNearestElement(vector<int>& arr, int n, int target)
{

    if (target <= arr[0])
        return arr[0];
    if (target >= arr[n - 1])
        return arr[n - 1];
    int left = 0, right = n, mid = 0;
    while (left < right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == target)
            return arr[mid];
        if (target < arr[mid])
        {
            if (mid > 0 && target > arr[mid - 1])
                return getNearest(arr[mid - 1], arr[mid], target);
            right = mid;
        }
        else
        {
            if (mid < n - 1 && target < arr[mid + 1])
                return getNearest(arr[mid], arr[mid + 1], target);
            left = mid + 1;
        }
    }
    return arr[mid];
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(begin(b), end(b));
    int ans = 1e9;
    for(int i = 0; i < n; i++)
    {
        int x = a[i];
        int nearest = getNearestElement(b, m, x);
        ans = min(ans, abs(x - nearest));
    }
    cout<<ans<<endl;
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