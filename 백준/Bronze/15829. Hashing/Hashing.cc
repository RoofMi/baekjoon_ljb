#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int L;
	unsigned int sum = 0;
	string str;

	cin >> L;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		unsigned int temp = (str.at(i) - 96) * pow(31, i);
		sum += temp % 1234567891;
	}

	cout << sum % 1234567891 << endl;

	return 0;
}