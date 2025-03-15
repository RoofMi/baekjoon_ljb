#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
	priority_queue <int> que;
	vector<int> result;
	int N;
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;

		if (input == 0)
		{
			if (que.empty())
				result.push_back(0);
			else
			{
				result.push_back(que.top());
				que.pop();
			}
		}
		else
			que.push(input);
	}

	for (int i = 0; i < result.size(); i++)
		cout << result[i] << '\n';

	return 0;
}