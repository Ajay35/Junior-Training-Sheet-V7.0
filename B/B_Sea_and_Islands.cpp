/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    if (n & 1)
    {
        int max_land = (n / 2) * (n / 2) + (n / 2 + 1) * (n / 2 + 1);
        if (max_land < k)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (k == 0)
                    {
                        cout << "S";
                        continue;
                    }
                    if (i & 1)
                    {
                        if (j & 1)
                        {
                            cout << "L";
                            k--;
                        }
                        else
                        {
                            cout << "S";
                        }
                    }
                    else
                    {
                        if (j & 1)
                        {
                            cout << "S";
                        }
                        else
                        {
                            cout << "L";
                            k--;
                        }
                    }
                }
                cout << endl;
            }
        }
    }
    else
    {
        int max_land = (n / 2) * n;
        if (max_land < k)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (k == 0)
                    {
                        cout << "S";
                        continue;
                    }
                    if (i & 1)
                    {
                        if (j & 1)
                        {
                            cout << "L";
                            k--;
                        }
                        else
                        {
                            cout << "S";
                        }
                    }
                    else
                    {
                        if (j & 1)
                        {
                            cout << "S";
                        }
                        else
                        {
                            cout << "L";
                            k--;
                        }
                    }
                }
                cout << endl;
            }
        }
    }

    return 0;
}