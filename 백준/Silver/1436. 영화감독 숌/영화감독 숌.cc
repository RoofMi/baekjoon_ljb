#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num;
	int count;
	int answer;

	cin >> num;
	cin.ignore();

	answer = 666;
	count = 1;

	while (1)
	{
		if (num == count)
		{
			break;
		}

		answer++;

		if (to_string(answer).find("666") != string::npos)
		{
			count++;
		}
	}

	cout << answer << endl;

	return 0;
}