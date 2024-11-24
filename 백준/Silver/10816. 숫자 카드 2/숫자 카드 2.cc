#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	int N, M;
	vector<int> list;
	vector<int> input;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;

		list.push_back(temp);
	}

	sort(list.begin(), list.end());

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		int temp;
		cin >> temp;

		input.push_back(temp);
	}

	for (int i = 0; i < input.size() - 1; i++)
		cout << upper_bound(list.begin(), list.end(), input.at(i)) - lower_bound(list.begin(), list.end(), input.at(i)) << " ";
	cout << upper_bound(list.begin(), list.end(), input.at(input.size() - 1)) - lower_bound(list.begin(), list.end(), input.at(input.size() - 1)) << endl;

	return 0;
}