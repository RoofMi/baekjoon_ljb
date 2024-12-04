#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, ans = 0;
	cin >> N;
	vector<int> list = vector<int>(N, 0);

	for (int i = 0; i < N; i++)
		cin >> list.at(i);

	sort(list.begin(), list.end());

	for (int i = 0; i < N; i++)
		ans += list.at(i) * (N - i);

	cout << ans << endl;

	return 0;
}