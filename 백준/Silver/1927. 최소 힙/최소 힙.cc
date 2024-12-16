#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	int N;
	int input;
	priority_queue<int, vector<int>, greater<int>> pq;
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;

		if (input == 0)
		{
			if (!pq.empty())
			{
				cout << pq.top() << '\n';
				pq.pop();
			}
			else
				cout << "0" << '\n';
		}
		else
			pq.push(input);
	}

	return 0;
}