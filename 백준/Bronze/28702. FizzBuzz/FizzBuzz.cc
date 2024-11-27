#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
	int ans;
	string str1, str2, str3;
	cin >> str1 >> str2 >> str3;

	if (isdigit(str1.at(0)))
		ans = stoi(str1) + 3;
	else if (isdigit(str2.at(0)))
		ans = stoi(str2) + 2;
	else
		ans = stoi(str3) + 1;

	if (ans % 3 == 0 && ans % 5 == 0)
		cout << "FizzBuzz" << endl;
	else if (ans % 3 == 0)
		cout << "Fizz" << endl;
	else if (ans % 5 == 0)
		cout << "Buzz" << endl;
	else
		cout << ans << endl;

	return 0;
}