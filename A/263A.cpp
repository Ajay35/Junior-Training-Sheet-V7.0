#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = -1, y = -1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int p;
            cin >> p;
            if (p)
            {
                x = i + 1;
                y = j + 1;
                break;
            }
        }
    }
    cout << abs(3 - x) + abs(3 - y) << endl;
    return 0;
}
