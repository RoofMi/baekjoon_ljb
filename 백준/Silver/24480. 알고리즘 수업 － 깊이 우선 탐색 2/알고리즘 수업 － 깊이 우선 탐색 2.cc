#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> list;
vector<int> visitedOrder;
int order = 1;

void dfs(int start)
{
	visitedOrder[start] = order;

	for (int i = 0; i < list[start].size(); i++)
	{
		int next = list[start].at(i);

		if (!visitedOrder[next])
		{
			order++;
			dfs(next);
		}
	}
}

bool compare(int a, int b)
{
	return a > b;
}

int main()
{
	int N, M, R = 0;

	cin >> N >> M >> R;

	list = vector<vector<int>>(N + 1);
	visitedOrder = vector<int>(N + 1, 0);

	for (int i = 0; i < M; i++)
	{
		int u, v;

		cin >> u >> v;

		list[u].push_back(v);
		list[v].push_back(u);
	}

	for (int i = 0; i < N + 1; i++)
		sort(list[i].begin(), list[i].end(), compare);

	dfs(R);

	for (int i = 1; i < N + 1; i++)
		cout << visitedOrder[i] << '\n';

	return 0;
}