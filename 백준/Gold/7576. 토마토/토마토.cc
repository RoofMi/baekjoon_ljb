#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int x, y, answer = 0;
vector<vector<int>> list;
vector<vector<int>> visited;

int dx[4] = { -1 , 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void init()
{
	int input;
	cin >> x >> y;

	list = vector<vector<int>>(y, vector<int>(x, 0));
	visited = vector<vector<int>>(y, vector<int>(x, 0));

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cin >> input;

			list[i].at(j) = input;
		}
	}

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if ((list[i].at(j) == 1) || (list[i].at(j) == -1))
				visited[i].at(j) = 1;
		}
	}
}

void bfs()
{
	queue<pair<int, int>> que;

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (list[i].at(j) == 1)
				que.push(make_pair(i, j));
		}
	}

	while (!que.empty())
	{
		int currentY = que.front().first;
		int currentX = que.front().second;
		que.pop();

		for (int i = 0; i < 4; i++)
		{
			int nextY = currentY + dy[i];
			int nextX = currentX + dx[i];

			if ((nextX >= 0 && nextX < x) && (nextY >= 0 && nextY < y))
			{
				if (visited[nextY].at(nextX) == 0 && list[nextY].at(nextX) == 0)
				{
					list[nextY].at(nextX) = 1;
					visited[nextY].at(nextX) = visited[currentY].at(currentX) + 1;

					que.push(make_pair(nextY, nextX));
				}
			}
		}
	}
}

int check()
{
	int answer = 0;
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (visited[i].at(j) > answer)
			{
				answer = visited[i].at(j);
			}
			else if (visited[i].at(j) == 0)
				return -1;
		}
	}

	return answer - 1;
}

int main()
{
	init();

	bfs();

	cout << check() << endl;

	return 0;

}