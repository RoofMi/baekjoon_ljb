#include <iostream>
#include <vector>

using namespace std;

vector<int> stair;
vector<int> answer;
int num;

void init()
{
	cin >> num;

	answer = vector<int>(num + 1, -1);
	stair = vector<int>(num + 1, -1);

	for (int i = 1; i < num + 1; i++)
	{
		int temp;
		cin >> temp;

		stair[i] = temp;
	}
}

void solve()
{
	answer[1] = stair[1];
	answer[2] = stair[1] + stair[2];
	answer[3] = max(stair[1] + stair[3], stair[2] + stair[3]);

	for (int i = 4; i < num + 1; i++)
		answer[i] = max(answer[i - 2] + stair[i], answer[i - 3] + stair[i - 1] + stair[i]);
}

int main()
{
	init();

	solve();

	cout << answer[num] << endl;

	return 0;
}