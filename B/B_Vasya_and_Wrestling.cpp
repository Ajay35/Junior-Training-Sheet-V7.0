/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

void move(vector<long long> &v, long long &s, long long x)
{
    v.push_back(x);
    s += x;
}
int lex(vector<long long> &v, vector<long long> &x)
{
    int k = min((int)v.size(), (int)x.size());
    for (int i = 0; i < k; i++)
    {
        if (v[i] > x[i])
            return 1;
        else if (v[i] < x[i])
            return -1;
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long score1 = 0, score2 = 0;
    vector<long long> lex1, lex2;
    string lastMove;

    int n;
    cin >> n;
    while (n--)
    {
        long long x;
        cin >> x;
        if (x > 0)
            move(lex1, score1, x), lastMove = "first\n";
        else
            move(lex2, score2, -x), lastMove = "second\n";
    }

    if (score1 > score2)
        cout << "first\n";
    else if (score1 < score2)
        cout << "second\n";
    else
    {
        int x;
        x = lex(lex1, lex2);
        if (x == 1)
            cout << "first\n";
        else if (x == -1)
            cout << "second\n";
        else
            cout << lastMove;
    }

    return 0;
}