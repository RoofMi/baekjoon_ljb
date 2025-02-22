#include <iostream>
#include <vector>

using namespace std;

vector<int> answer = vector<int>(12, -1);

void cal()
{
	answer[1] = 1;
	answer[2] = 2;
	answer[3] = 4;

	for (int i = 4; i < 12; i++)
		answer[i] = answer[i - 3] + answer[i - 2] + answer[i - 1];
}

int main()
{
	int T;
	cin >> T;

	cal();

	for (int i = 0; i < T; i++)
	{
		int input;
		cin >> input;

		cout << answer[input] << '\n';
	}

	return 0;
}