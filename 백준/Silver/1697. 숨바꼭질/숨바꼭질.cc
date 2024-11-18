#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> list;
vector<bool> visited;
vector<int> answer;

void bfs(int start)
{
	int size = list.size();
	queue<int> que;
	que.push(start);

	visited[start] = true;

	while (!que.empty())
	{
		int current = que.front();
		que.pop();

		if (current - 1 >= 0)
		{
			if (!visited[current - 1])
			{
				que.push(current - 1);
				visited[current - 1] = true;

				answer[current - 1] = answer[current] + 1;
			}
		}
		if (current + 1 < size)
		{
			if (!visited[current + 1])
			{
				que.push(current + 1);
				visited[current + 1] = true;

				answer[current + 1] = answer[current] + 1;
			}
		}
		if (current * 2 < size)
		{
			if (!visited[current * 2])
			{
				que.push(current * 2);
				visited[current * 2] = true;

				answer[current * 2] = answer[current] + 1;
			}
		}
	}
}

int main()
{
	int N, K;
	cin >> N >> K;

	list = vector<int>(((N > K ? N : K) + 1) * 2, 0);
	visited = vector<bool>(((N > K ? N : K) + 1) * 2, false);
	answer = vector<int>(((N > K ? N : K) + 1) * 2, 0);

	bfs(N);

	cout << answer[K] << '\n';

	return 0;
}