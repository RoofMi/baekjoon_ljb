#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> que;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string command;
		cin >> command;

		if (command.compare("push") == 0)
		{
			int input;
			cin >> input;

			que.push(input);
		}
		else if (command.compare("pop") == 0)
		{
			if (!que.empty())
			{
				cout << que.front() << '\n';
				que.pop();
			}
			else
				cout << "-1\n";
		}
		else if (command.compare("size") == 0)
		{
			cout << que.size() << '\n';
		}
		else if (command.compare("empty") == 0)
		{
			if (!que.empty())
				cout << "0\n";

			else
				cout << "1\n";
		}
		else if (command.compare("front") == 0)
		{
			if (!que.empty())
				cout << que.front() << '\n';
			else
				cout << "-1\n";
		}
		else if (command.compare("back") == 0)
		{
			if (!que.empty())
				cout << que.back() << '\n';
			else
				cout << "-1\n";
		}
	}

	return 0;
}