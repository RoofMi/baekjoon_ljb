#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> map;
vector<vector<int>> ans;
vector<vector<bool>> visited;

int dx[4] = { 0, 1, 0, -1 };	// up, left, down, right
int dy[4] = { -1, 0, 1, 0 };

int n, m;

void travel(int Y, int X)
{
	queue<pair<int, int>> que;
	visited[Y].at(X) = true;
	que.push(make_pair(Y, X));

	while (!que.empty())
	{
		int currentY = que.front().first;
		int currentX = que.front().second;
		que.pop();

		for (int i = 0; i < 4; i++)
		{
			int nextX = currentX + dx[i];
			int nextY = currentY + dy[i];

			if ((nextX < m && nextX >= 0) && (nextY < n && nextY >= 0))
			{
				if (map[nextY].at(nextX) == 1 && !visited[nextY].at(nextX))
				{
					visited[nextY].at(nextX) = true;
					ans[nextY].at(nextX) = ans[currentY].at(currentX) + 1;

					que.push(make_pair(nextY, nextX));
				}
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (map[i].at(j) == 1 && !visited[i].at(j))
				ans[i].at(j) = -1;
		}
	}
}

int main()
{
	int startX = 0, startY = 0;
	cin >> n >> m;

	map = vector<vector<int>>(n, vector<int>(m, 0));
	ans = vector<vector<int>>(n, vector<int>(m, 0));
	visited = vector<vector<bool>>(n, vector<bool>(m, false));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int input;
			cin >> input;

			if (input == 2)
			{
				startX = j;
				startY = i;
			}
				

			map[i].at(j) = input;
		}
	}

	travel(startY, startX);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m - 1; j++)
		{
			cout << ans[i].at(j) << " ";
		}

		cout << ans[i].at(m - 1) << '\n';
	}

	return 0;
}