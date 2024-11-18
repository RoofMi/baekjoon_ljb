#include <iostream>

using namespace std;

int main()
{
	string input;
	int len;
	bool correct;

	while (true)
	{
		cin >> input;

		if (input.compare("0") == 0)
			break;

		len = input.length();
		correct = true;

		for (int i = 0; i < len / 2; i++)
		{
			if (input.at(i) != input.at(len - 1 - i))
			{
				correct = false;
				break;
			}
		}

		if (correct)
			cout << "yes\n";
		else
			cout << "no\n";
	}

	return 0;
}