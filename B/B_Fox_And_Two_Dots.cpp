/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int n, m;
string board[51];
bool visited[51][51];
bool findCycle = false;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
 
void dfs(int x, int y, int fromX, int fromY, char needColor)
{
	if(x < 0 || x >= n || y < 0 || y >= m) return;
	if(board[x][y] != needColor) return;
	if(visited[x][y])
	{
		findCycle = true;
		return;
	}
	visited[x][y] = true;
	for(int f = 0; f < 4; f++)
	{
		int nextX = x + dx[f];
		int nextY = y + dy[f];
		if(nextX == fromX && nextY == fromY) continue;
		dfs(nextX, nextY, x, y, needColor);
	}
}
 
int main()
{
	ios :: sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		cin >> board[i];
	memset(visited, false, sizeof(visited));
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(!visited[i][j])
			{
				dfs(i, j, -1, -1, board[i][j]);
            }
        }
    }
	cout << (findCycle ? "Yes" : "No") << endl;
	return 0;
}