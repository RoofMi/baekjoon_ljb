#include <iostream>

using namespace std;

int N, K;
int w[101];
int v[101];
int answer[101][100001];

int main()
{
	cin >> N >> K;

	for (int i = 1; i <= N; i++)
	{
		cin >> w[i] >> v[i];
	}

	for (int i = 0; i <= N; i++)
	{
		for (int j = 0; j <= K; j++)
		{
			if (i == 0 || j == 0)
			{
				answer[i][j] = 0;
			}
			else
			{
				if (j >= w[i])
				{
					answer[i][j] = max(answer[i - 1][j], answer[i - 1][j - w[i]] + v[i]);
				}
				else
				{
					answer[i][j] = answer[i - 1][j];
				}
			}
		}
	}

	cout << answer[N][K] << endl;

	return 0;
}