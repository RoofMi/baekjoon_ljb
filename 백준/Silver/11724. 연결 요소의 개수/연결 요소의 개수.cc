#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

int bfs(int start)
{
	if (visited[start])
		return 0;

	queue<int> que;
	que.push(start);
	visited[start] = true;

	while (!que.empty())
	{
		int current = que.front();
		que.pop();

		for (int i = 0; i < graph[current].size(); i++)
		{
			int next = graph[current].at(i);
			
			if (!visited[next])
			{
				que.push(next);
				visited[next] = true;
			}
		}
	}

	return 1;
}

int main()
{
	int N, M, ans = 0;
	cin >> N >> M;

	graph = vector<vector<int>>(N + 1);
	visited = vector<bool>(N + 1, false);

	for (int i = 0; i < M; i++)
	{
		int u, v;
		cin >> u >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for (int i = 1; i <= N; i++)
		ans += bfs(i);

	cout << ans << endl;

	return 0;
}