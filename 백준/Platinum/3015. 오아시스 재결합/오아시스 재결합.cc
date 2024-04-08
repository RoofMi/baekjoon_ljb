#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	int current;
	int same;
	long long count = 0;
	stack<pair<long long, long long>> stc;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> current;
		same = 1;

		while (!stc.empty() && stc.top().first <= current)
		{
			count += stc.top().second;

			if (stc.top().first == current)
				same += stc.top().second;

			stc.pop();
		}

		if (!stc.empty())
			count++;

		stc.push({ current, same });
	}

	cout << count << endl;

	return 0;
}