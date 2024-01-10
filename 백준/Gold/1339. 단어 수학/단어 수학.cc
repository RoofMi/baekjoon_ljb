#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool compare(int a, int b)
{
	return a > b;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	int answer = 0;
	int alpha[26];
	int len[10];
	string input[10];

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input[i];
		len[i] = input[i].length();
	}

	for (int i = 0; i < 26; i++)
	{
		alpha[i] = 0;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < len[i]; j++)
		{
			alpha[input[i].at(j) - 'A'] += (len[i] != 1) ? pow(10, (len[i] - j - 1)) : 1;
		}
	}

	sort(alpha, alpha + 26, compare);

	for (int i = 0; i < 10; i++)
	{
		answer += alpha[i] * (9 - i);
	}

	cout << answer;

	return 0;
}