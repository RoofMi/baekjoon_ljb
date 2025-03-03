#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
	vector<int> list;
	int n;
	cin >> n;

	list = vector<int>(n + 1, -1);
	
	for (int i = 1; i * i <= n; i++)
		list[i * i] = 1;
		

	for (int i = 1; i <= n; i++)
	{
		if (list[i] == -1)
		{
			int min = INT_MAX;

			for (int j = 1; j * j <= i; j++)
			{
				int current = list[j * j] + list[i - (j * j)];

				if (current < min)
					min = current;
			}

			list[i] = min;
		}
	}

	cout << list[n] << '\n';

	return 0;
}