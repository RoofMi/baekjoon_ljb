#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
vector<int> list;

int solve()
{
	int answer = 0;
	int minValue = 0;
	int maxValue = list[N - 1];

	while (minValue <= maxValue)
	{
		long long int sum = 0;

		int midValue = (minValue + maxValue) / 2;

		for (int i = 0; i < list.size(); i++)
		{
			if (list[i] > midValue)
				sum += list[i] - midValue;
		}

		if (sum > M)
		{
			minValue = midValue + 1;
			answer = midValue;
		}	
		else if (sum < M)
			maxValue = midValue - 1;
		else
		{
			answer = midValue;
			break;
		}	
	}

	return answer;
}

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;

		list.push_back(temp);
	}

	sort(list.begin(), list.end());

	cout << solve() << endl;

	return 0;
}