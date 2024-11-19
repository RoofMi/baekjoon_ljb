#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> answer;
vector<vector<bool>> visited;

int dx[8] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int dy[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };

void bfs(int X, int Y, int I)
{
	queue<pair<int, int>> que;

	visited[Y].at(X) = true;
	que.push(make_pair(Y, X));

	while (!que.empty())
	{
		int currentY = que.front().first;
		int currentX = que.front().second;
		que.pop();

		for (int i = 0; i < 8; i++)
		{
			int nextY = currentY + dy[i];
			int nextX = currentX + dx[i];

			if ((nextY >= 0 && nextY < I) && (nextX >= 0 && nextX < I))
			{
				if (!visited[nextY].at(nextX))
				{
					visited[nextY].at(nextX) = true;
					answer[nextY].at(nextX) = answer[currentY].at(currentX) + 1;
					que.push(make_pair(nextY, nextX));
				}
			}
		}
	}
}

int main()
{
	int T, I, X, Y, DesX, DesY;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> I >> X >> Y >> DesX >> DesY;

		answer = vector<vector<int>>(I, vector<int>(I, 0));
		visited = vector<vector<bool>>(I, vector<bool>(I, false));

		bfs(X, Y, I);

		cout << answer[DesY].at(DesX) << '\n';
	}

	return 0;
}