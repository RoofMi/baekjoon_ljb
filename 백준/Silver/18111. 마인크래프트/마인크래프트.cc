#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <vector<int>> board;
int N, M, B;

int check(int height)
{
	int time = 0;
	int inventory = B;

	int moreValue = 0;
	int lessValue = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (board[i].at(j) > height)
				moreValue += board[i].at(j) - height;
			else if (board[i].at(j) < height)
				lessValue += height - board[i].at(j);
		}
	}

	inventory = inventory + moreValue - lessValue;

	if (inventory >= 0)
		return (time = (moreValue * 2) + lessValue);
	else
		return -1;
}

int main()
{
	vector <pair<int, int>> result;
	int max = -1;
	cin >> N >> M >> B;

	board = vector<vector<int>>(N, vector<int>(M, 0));
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			int temp;
			cin >> temp;

			board[i].at(j) = temp;

			if (max < temp)
				max = temp;
		}
	}

	for (int h = max; h >= 0; h--)
	{
		int time = check(h);

		if (time != -1)
			result.push_back(make_pair(time, h));
	}

	sort(result.begin(), result.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
		if (a.first == b.first)
			return a.second > b.second;
		return a.first < b.first;
	});

	cout << result[0].first << " " << result[0].second << '\n';

	return 0;
}