#include <iostream>
#include <vector>

using namespace std;

int solve(int N)
{
	vector<int> list = vector<int>(1001, -1);
	list[1] = 1;
	list[2] = 2;

	for (int i = 3; i <= N; i++)
		list[i] = (list[i - 1] + list[i - 2]) % 10007;

	return list[N];
}

int main()
{
	int N;
	cin >> N;

	cout << solve(N) << '\n';

	return 0;
}