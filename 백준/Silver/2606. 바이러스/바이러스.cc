#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<vector<int>> list;
vector<bool> visited;

int bfs()
{
	queue<int> que;
	int answer = 0;

	visited[1] = true;
	que.push(1);

	while (!que.empty())
	{
		int current = que.front();
		que.pop();

		for (int i = 0; i < list[current].size(); i++)
		{
			int next = list[current].at(i);
			if (!visited[next])
			{
				visited[next] = true;
				que.push(next);
			}
		}
	}

	for (bool visit : visited)
	{
		if (visit)
			answer++;
	}

	return answer - 1;
}

int main()
{
	int N, M;
	cin >> N >> M;

	list = vector<vector<int>>(N + 1);
	visited = vector<bool>(N + 1, false);

	for (int i = 0; i < M; i++)
	{
		int u, v;
		cin >> u >> v;

		list[u].push_back(v);
		list[v].push_back(u);
	}

	cout << bfs() << endl;

	return 0;
}