#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M, ans = 0;
	vector<int> list;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;

		list.push_back(temp);
	}

	for (int i = 0; i < N - 2; i++)
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				int sum = list[i] + list[j] + list[k];

				if (sum > ans && sum <= M)
					ans = sum;
			}
		}
	}

	cout << ans << endl;

	return 0;
}