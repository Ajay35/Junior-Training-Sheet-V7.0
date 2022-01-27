/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

bool perfect_square(int n)
{
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n)))
        return 1;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> pegs(n + 1);

        int disk = 1;
        while (true)
        {
            int c = 0;
            for (int i = 1; i <= n; i++)
            {
                if (pegs[i] == 0 or perfect_square(pegs[i] + disk))
                {
                    pegs[i] = disk;
                    disk++;
                    c++;
                    break;
                }
            }
            if (c == 0)
            {
                cout << disk - 1 << endl;
                break;
            }
        }
    }
    return 0;
}