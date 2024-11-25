#include <iostream>

using namespace std;

int main()
{
	int N, K;
	int num = 1;
	int den = 1;

	cin >> N >> K;

	for (int i = N - K + 1; i <= N; i++)
		num *= i;

	for (int i = 1; i <= K; i++)
		den *= i;

	cout << num / den << endl;

	return 0;
}