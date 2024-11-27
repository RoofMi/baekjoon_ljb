#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int L;
	long long sum = 0;
	long long r = 1;
	string str;

	cin >> L;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		long long temp = (str.at(i) - 96) * r;
		r = (r * 31) % 1234567891;
		sum += temp % 1234567891;
	}

	cout << sum % 1234567891 << endl;

	return 0;
}