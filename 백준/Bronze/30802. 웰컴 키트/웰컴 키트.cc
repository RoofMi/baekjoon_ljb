#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, T, P, sum = 0;
	cin >> N;

	vector<int> list;

	for (int i = 0; i < 6; i++)
	{
		int temp;
		cin >> temp;

		list.push_back(temp);
	}

	cin >> T >> P;

	for (int i = 0; i < 6; i++)
	{
		if (list[i] != 0)
		{
			if (list[i] > T)
			{
				if (list[i] % T == 0)
					sum += list[i] / T;
				else
					sum += list[i] / T + 1;
			}
			else
				sum += 1;
		}
	}
	cout << sum << '\n' << N / P << " " << N % P << endl;

	return 0;
}