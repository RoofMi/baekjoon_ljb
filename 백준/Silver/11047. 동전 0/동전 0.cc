#include <iostream>

int main()
{
	int N, K;
	int array[10];
	int answer = 0;

	std::cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		std::cin >> array[i];
	}

	for (int i = N - 1; i >= 0; i--)
	{
		if (array[i] <= K)
		{
			while (1)
			{
				K -= array[i];

				answer++;

				if (array[i] > K)
					break;
			}
		}
		else if (K == 0)
			break;
	}

	std::cout << answer;

	return 0;
}