#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<string> maze;
vector<vector<bool>> visited;
vector<vector<int>> answer;
int N, M;

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void bfs()
{
	queue<pair<int, int>> que;
	int x, y = 0;

	visited[0].at(0) = true;
	answer[0].at(0) = 1;
	que.push(make_pair(0, 0));

	while (!que.empty())
	{
		y = que.front().first;
		x = que.front().second;
		que.pop();

		for (int i = 0; i < 4; i++)
		{
			int nextY = y + dy[i];
			int nextX = x + dx[i];

			if ((nextX >= 0 && nextX < M) && (nextY >= 0 && nextY < N) && maze[nextY].at(nextX) == '1' && !visited[nextY].at(nextX))
			{
				visited[nextY].at(nextX) = true;
				answer[nextY].at(nextX) = answer[y].at(x) + 1;
				que.push(make_pair(nextY, nextX));
			}
		}
	}
}

int main()
{
	cin >> N >> M;

	maze = vector<string>(N, "");
	visited = vector<vector<bool>>(N, vector<bool>(M, false));
	answer = vector<vector<int>>(N, vector<int>(M, 0));

	for (int i = 0; i < N; i++)
	{
		string input;
		cin >> input;

		maze[i] = input;
	}

	bfs();

	cout << answer[N - 1].at(M - 1) << '\n';

	return 0;
}