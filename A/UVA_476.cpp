#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x1[10], y1[10], x2[10], y2[10], X, Y;
    char ch;
    int index = 0, p_no = 1, fig;

    while (1)
    {
        cin >> ch;
        if (ch == '*')
            break;
        cin >> x1[index] >> y1[index] >> x2[index] >> y2[index];
        index++;
    }
    while (scanf("%lf %lf", &X, &Y) == 2)
    {

        if (X == 9999.9 && Y == 9999.9)
            break;
        bool f = false;

        for (fig = 0; fig < 10; fig++)
        {
            if (X > x1[fig] && X < x2[fig] && Y > y2[fig] && Y < y1[fig])
            {
                printf("Point %d is contained in figure %d\n", p_no, fig + 1);
                f = true;
            }
        }
        if (f == false)
            printf("Point %d is not contained in any figure\n", p_no);

        p_no++;
    }

    return 0;
}