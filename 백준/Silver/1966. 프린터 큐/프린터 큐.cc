#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int T, N, M;
	cin >> T;

	for (int t = 0; t < T; t++)
	{
		queue<pair<int, int>> que;
		priority_queue<int> printer;
		int ans = 0;

		cin >> N >> M;

		for (int i = 0; i < N; i++)
		{
			int temp;
			cin >> temp;

			que.push(make_pair(i, temp));
			printer.push(temp);
		}

		while (!printer.empty())
		{
			int number = que.front().first;
			int important = que.front().second;
			que.pop();

			if (printer.top() == important)
			{
				printer.pop();
				ans++;

				if (number == M)
					break;
			}
			else
				que.push(make_pair(number, important));
		}

		cout << ans << '\n';
	}

	return 0;
}