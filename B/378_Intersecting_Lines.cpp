#include <bits/stdc++.h>
using namespace std;

#define sz(a) ((int)a.size())
#define all(a) a.begin(), a.end()
#define LL long long
#define LD long double
#define vi vector<int>
#define vl vector<LL>
#define vs vector<string>
#define vb vector<bool>
#define ii pair<int, int>
#define vii vector<ii>
#define SET(v, i) (v | (1 << i))
#define TEST(v, i) (v & (1 << i))
#define TOGGLE(v, i) (v ^ (1 << i))

const double eps = 1e-9;

bool DoubleEq(double a, double b)
{
    return abs(a - b) < eps;
}

enum INTERSECTION_TYPE
{
    POINT,
    LINE,
    NONE,
};

struct Point
{
    double x;
    double y;
};

class Line
{
private:
    double a;
    double b;
    double c;

    bool Parallel(const Line &l) const
    {
        return DoubleEq(a, l.a) && DoubleEq(b, l.b);
    }

    bool Same(const Line &l) const
    {
        return Parallel(l) && DoubleEq(c, l.c);
    }

public:
    Line(const Point &p1, const Point &p2)
    {
        if (DoubleEq(p1.x, p2.x))
        {
            // vertical
            a = 1.0, b = 0, c = -p1.x;
        }
        else
        {
            a = -(p2.y - p1.y) / (p2.x - p1.x);
            b = 1.0;
            c = -a * p1.x - p1.y;
        }
    }

    INTERSECTION_TYPE AreIntersecting(const Line &l, Point *p) const
    {
        if (Same(l))
            return LINE;

        if (Parallel(l))
            return NONE;

        p->x = (l.c * b - c * l.b) / (a * l.b - l.a * b);
        if (b < eps)
        {
            // vertical
            p->y = -(l.a * p->x + l.c) / l.b;
        }
        else
        {
            p->y = -(a * p->x + c) / b;
        }
        return POINT;
    }
};

int main()
{
    int n;
    scanf("%d", &n);
    printf("INTERSECTING LINES OUTPUT\n");
    while (n--)
    {
        Point p1, p2;
        scanf("%lf %lf %lf %lf", &p1.x, &p1.y, &p2.x, &p2.y);
        Line l1(p1, p2);
        scanf("%lf %lf %lf %lf", &p1.x, &p1.y, &p2.x, &p2.y);
        Line l2(p1, p2);
        INTERSECTION_TYPE type = l1.AreIntersecting(l2, &p1);
        switch (type)
        {
        case NONE:
            printf("NONE\n");
            break;
        case LINE:
            printf("LINE\n");
            break;
        case POINT:
            printf("POINT %.2f %.2f\n", p1.x, p1.y);
        }
    }
    printf("END OF OUTPUT\n");
    return 0;
}