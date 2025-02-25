#include <iostream>
#include <vector>

using namespace std;

int N;
vector<vector<int>> board;
vector<int> answer;

void solve(int sX, int sY, int size)
{
	if (size == 0)
		return;

	bool bClear = true;
	int color = board[sY].at(sX);

	for (int y = sY; y < sY + size; y++)
	{
		for (int x = sX; x < sX + size; x++)
		{
			if (color != board[y].at(x))
			{
				bClear = false;
				break;
			}
		}
	}

	if (bClear)
	{
		if (color == 0)
			answer[0]++;
		else
			answer[1]++;
	}
	else
	{
		solve(sX, sY, size / 2);
		solve(sX + (size / 2), sY, size / 2);
		solve(sX, sY + (size / 2), size / 2);
		solve(sX + (size / 2), sY + (size / 2), size / 2);
	}
}

int main()
{
	cin >> N;

	board = vector<vector<int>>(N, vector<int>(N, 0));
	answer = vector<int>(2, 0);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int temp;
			cin >> temp;

			board[i].at(j) = temp;
		}
	}
	
	solve(0, 0, N);

	cout << answer[0] << '\n' << answer[1] << '\n';

	return 0;
}