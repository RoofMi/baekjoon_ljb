#include <iostream>

using namespace std;

int GCD(int n1, int n2)
{
	if (n2 == 0)
		return n1;
	else
		return GCD(n2, n1 % n2);
}

int main()
{
	int input1, input2, gcdResult;
	cin >> input1 >> input2;

	if (input1 > input2)
		gcdResult = GCD(input1, input2);
	else
		gcdResult = GCD(input2, input1);

	cout << gcdResult << '\n' << (input1 * input2) / gcdResult << endl;

	return 0;
}