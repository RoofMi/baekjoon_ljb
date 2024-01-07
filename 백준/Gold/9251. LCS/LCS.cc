#include <iostream>

using namespace std;

int answer[1001][1001];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string a;
	string b;
	int a_len;
	int b_len;

	cin >> a >> b;

	a_len = a.length();
	b_len = b.length();

	for (int i = 1; i <= a_len; i++)
	{
		for (int j = 1; j <= b_len; j++)
		{
			if (a[i - 1] == b[j - 1])
			{
				answer[i][j] = answer[i - 1][j - 1] + 1;
			}
			else
			{
				answer[i][j] = max(answer[i - 1][j], answer[i][j - 1]);
			}
		}
	}

	cout << answer[a_len][b_len] << endl;

	return 0;
}