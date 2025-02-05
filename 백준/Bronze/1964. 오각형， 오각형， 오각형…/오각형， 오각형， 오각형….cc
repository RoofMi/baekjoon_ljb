#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	int num = 7;
	int sum = 5;
	
	cin >> N;

	for (int i = 2; i <= N; i++)
    {
		sum += num;
		num += 3;

		sum %= 45678;
		num %= 45678;
	}

	cout << sum << endl;

	return 0;
}