#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<pair<int, int>> list;

	for (int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;

		list.push_back(make_pair(x, y));
	}

	for (int i = 0; i < N; i++)
	{
		int rank = 1;

		for (int j = 0; j < N; j++)
		{
			if (list.at(i).first < list.at(j).first && list.at(i).second < list.at(j).second)
				rank++;
		}

		cout << rank << " ";
	}

	return 0;
}