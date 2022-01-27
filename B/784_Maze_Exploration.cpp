#include <bits/stdc++.h>
using namespace std;

int line, dir[4][2] = {-1, 0, 0, 1, 1, 0, 0, -1};
char maze[100][100];
void dfs(int x, int y)
{
    int i, X, Y, l = strlen(maze[x]);
    for (i = 0; i < 4; i++)
    {
        X = x + dir[i][0];
        Y = y + dir[i][1];
        if ((X >= 0) && (X < line) && (Y >= 0) && (Y < l) && (maze[X][Y] == ' '))
        {
            maze[X][Y] = '#';
            dfs(X, Y);
        }
    }
}
int main()
{
    int i, j, t, n, xx, yy;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        line = 0;
        while (gets(maze[line]))
            if (maze[line][0] == '_')
                break;
            else
                ++line;
        for (i = 0; i < line; i++)
            for (j = 0; j < strlen(maze[i]); j++)
                if (maze[i][j] == '*')
                {
                    maze[i][j] = '#';
                    xx = i;
                    yy = j;
                    break;
                }
        dfs(xx, yy);
        for (i = 0; i <= line; i++)
            puts(maze[i]);
    }
    return 0;
}