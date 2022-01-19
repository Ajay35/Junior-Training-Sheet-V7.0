/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

struct team
{
    int id, solved;

    team() {}

    bool operator<(team X) const
    {
        return solved > X.solved;
    }
} a[150000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].id >> a[i].solved;
    }

    stable_sort(a, a + n);

    for (int i = 0; i < n; ++i)
    {
        cout << a[i].id << " " << a[i].solved << endl;
    }
    return 0;
}