#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int N, M, answer;
int exclude[11];

bool check(string str)
{
	for (int i = 0; i < M; i++)
	{
		if (str.find(to_string(exclude[i])) != string::npos)
			return false;
	}

	return true;
}

int calculate()
{
	int i_Len;

	for (int i = 0; i <= 1000000; i++)
	{
		i_Len = to_string(i).length();
		if (check(to_string(i)))
		{
			answer = min(abs(N - i) + i_Len, answer);
		}
	}

	return answer;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	cin >> M;

	answer = abs(100 - N);

	for (int i = 0; i < M; i++)
	{
		cin >> exclude[i];
	}

	if (N == 100)
		cout << 0;
	else
		cout << calculate();

	return 0;
}