#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> map;
vector<vector<bool>> visited;

int N;
int dx[4] = {-1 , 0, 1, 0};
int dy[4] = { 0, 1, 0, -1 };
int cnt;

void dfs(int x, int y)
{
	for (int i = 0; i < 4; i++)
	{
		int nextX = x + dx[i];
		int nextY = y + dy[i];

		if ((nextX >= 0 && nextX < N) && (nextY >= 0 && nextY < N))
		{
			if (!visited[nextX].at(nextY) && map[nextX].at(nextY) == '1')
			{
				visited[nextX].at(nextY) = true;
				cnt++;
				dfs(nextX, nextY);
			}
		}
	}
}

int main()
{
	vector<int> answer;

	cin >> N;

	map = vector<string>(N);
	visited = vector<vector<bool>>(N, vector<bool>(N, false));

	for (int i = 0; i < N; i++)
	{
		string temp;
		cin >> temp;

		map[i] = temp;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (!visited[i].at(j) && map[i].at(j) == '1')
			{
				visited[i].at(j) = true;
				cnt = 1;
				dfs(i, j);

				answer.push_back(cnt);
			}
		}
	}
	
	sort(answer.begin(), answer.end());

	cout << answer.size() << "\n";

	for (int i = 0; i < answer.size(); i++)
		cout << answer[i] << '\n';

	return 0;
}