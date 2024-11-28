#include <iostream>

using namespace std;

int main()
{
	int N;
	int ans = 0;
	cin >> N;

	for (int i = 5; i <= N; i *= 5)
		ans += N / i;

	cout << ans << endl;

	return 0;
}