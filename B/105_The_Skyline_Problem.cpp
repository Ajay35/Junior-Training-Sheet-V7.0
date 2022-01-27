/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

const int START = 1;

int bestHeight[10005];

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int largestEnd = 0;
    int start, height, end;

    while (cin >> start >> height >> end)
    {
        if (largestEnd < end)
            largestEnd = end;

        for (int i = start; i < end; ++i)
            bestHeight[i] = max(bestHeight[i], height);
    }

    int best = bestHeight[1];
    cout << "1 " << best;

    for (int i = 2; i < largestEnd; ++i)
    {
        if (best != bestHeight[i])
        {
            cout << ' ' << i << ' ' << bestHeight[i];
            best = bestHeight[i];
        }
    }
    cout << ' ' << largestEnd << " 0\n";
}