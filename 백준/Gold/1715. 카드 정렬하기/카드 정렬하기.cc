#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	int temp;
	int sum = 0;
	priority_queue<int, vector<int>, greater<int>> list;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		list.push(temp);
	}

	while (list.size() > 1)
	{
		temp = list.top();
		list.pop();
		temp += list.top();
		list.pop();
		
		sum += temp;
		list.push(temp);
	}

	cout << sum;

	return 0;
}