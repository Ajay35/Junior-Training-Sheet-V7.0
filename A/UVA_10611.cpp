#include <bits/stdc++.h>

using namespace std;

int main()
{

    int tc, t = 1;
    while (cin >> tc)
    {
        vector<int> arr(tc);
        vector<int> vc;
        for (int i = 0; i < tc; i++)
        {
            cin >> arr[i];
            vc.push_back(arr[i]);
        }
        int tc2, num;
        cin >> tc2;
        for (int i = 0; i < tc2; i++)
        {
            cin >> num;
            int low = lower_bound(vc.begin(), vc.end(), num) - vc.begin();
            int high = upper_bound(vc.begin(), vc.end(), num) - vc.begin();

            if (low == 0)
                cout << "X ";
            else
                cout << arr[low - 1] << " ";

            if (high == tc)
                cout << "X" << endl;
            else
                cout << arr[high] << endl;
        }
    }

    return 0;
}