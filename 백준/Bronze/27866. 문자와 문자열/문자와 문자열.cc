#include <iostream>

using namespace std;

int main()
{
	string input;
	int idx;

	cin >> input >> idx;

	cout << input.at(idx - 1);

	return 0;
}