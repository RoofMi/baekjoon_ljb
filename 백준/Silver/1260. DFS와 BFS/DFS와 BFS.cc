#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

bool visited[1001];
vector<int> graph[1001];

void solution_dfs(int start)
{
	visited[start] = true;
	cout << start << " ";

	for (int i = 0; i < graph[start].size(); i++)
	{
		int next = graph[start].at(i);

		if (!visited[next])
			solution_dfs(next);
	}
}

void solution_bfs(int start)
{
	queue<int> que;
	que.push(start);
	visited[start] = true;

	while (!que.empty())
	{
		int corrent = que.front();
		que.pop();
		cout << corrent << " ";

		for (int i = 0; i < graph[corrent].size(); i++)
		{
			int next = graph[corrent].at(i);

			if (!visited[next])
			{
				que.push(next);
				visited[next] = true;
			}
		}
	}
}

int main()
{
	int N, M, V = 1;
	cin >> N >> M >> V;

	for (int i = 0; i < M; i++)
	{
		int v1, v2;
		cin >> v1 >> v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}

	for (int i = 1; i < 1001; i++)
		sort(graph[i].begin(), graph[i].end());
	

	solution_dfs(V);
	cout << endl;

	for (int i = 0; i < 1001; i++)
		visited[i] = false;

	solution_bfs(V);
	cout << endl;

	return 0;
}