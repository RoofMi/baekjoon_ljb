#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> list;
vector<vector<bool>> visited;
vector<int> answer;

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int M, N;

void dfs(int x, int y)
{
	for (int i = 0; i < 4; i++)
	{
		int nextX = x + dx[i];
		int nextY = y + dy[i];

		if ((nextX >= 0 && nextX < M) && (nextY >= 0 && nextY < N))
		{
			if (!visited[nextY].at(nextX) && list[nextY].at(nextX) == 1)
			{
				visited[nextY].at(nextX) = true;
				dfs(nextX, nextY);
			}	
		}
	}
}

void calculate()
{
	int K, sum = 0;
	cin >> M >> N >> K;

	list = vector<vector<int>>(N, vector<int>(M, 0));
	visited = vector<vector<bool>>(N, vector<bool>(M, false));

	for (int i = 0; i < K; i++)
	{
		int x, y;
		cin >> x >> y;

		list[y].at(x) = 1;
	}

	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < M; x++)
		{
			if (!visited[y].at(x) && list[y].at(x) == 1)
			{
				visited[y].at(x) = true;
				dfs(x, y);
				sum++;
			}
		}
	}

	answer.push_back(sum);
}

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
		calculate();

	for (int i = 0; i < answer.size(); i++)
		cout << answer[i] << '\n';

	return 0;
}