#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> list;
vector<int> input;

int findValue(int value, int v1, int v2)
{
	if (v1 > v2)
		return 0;

	int mid = (v1 + v2) / 2;

	if (value == list.at(mid))
		return 1;
	else if (value > list.at(mid))
		return findValue(value, mid + 1, v2);
	else
		return findValue(value, v1, mid - 1);
}

int main()
{
	int N, M;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;

		list.push_back(temp);
	}

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		int temp;
		cin >> temp;

		input.push_back(temp);
	}

	sort(list.begin(), list.end());

	for (int i = 0; i < M; i++)
		cout << findValue(input[i], 0, N - 1) << '\n';

	return 0;
}