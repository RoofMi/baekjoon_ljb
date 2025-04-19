#include <iostream>
#include <string>

using namespace std;

int calculate(string input)
{
	string temp;
	int sum = 0;
	bool bMinus = false;

	for (int i = 0; i < input.length(); i++)
	{
		if (isdigit(input[i]))
		{
			temp += input[i];
		}
		else
		{
			if (!bMinus)
			{
				sum += stoi(temp);
				temp = "";

				if (input[i] == '-')
					bMinus = true;
			}
			else
			{
				sum -= stoi(temp);
				temp = "";
			}
		}
	}

	if (!bMinus)
		sum += stoi(temp);
	else
		sum -= stoi(temp);

	return sum;
}

int main()
{
	string input;
	cin >> input;

	cout << calculate(input);

	return 0;
}