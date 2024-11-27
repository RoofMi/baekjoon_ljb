#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		int sum = 0;
		int current = i;

		while (current > 0)
		{
			sum += current % 10;
			current /= 10;
		}

		if (sum + i == N)
		{
			cout << i << endl;
			
			return 0;
		}
	}

	cout << "0" << endl;

	return 0;
}