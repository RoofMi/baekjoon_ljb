#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string N;
	vector<int> list = vector<int>(10, 0);
	int ans = 0;

	cin >> N;

	for (int i = 0; i < N.length(); i++)
		list[N.at(i) - '0']++;

	if ((list.at(6) + list.at(9)) % 2 == 0)
	{
		int temp = (list.at(6) + list.at(9)) / 2;
		list.at(6) = temp;
		list.at(9) = temp;
	}
	else
	{
		int temp = ((list.at(6) + list.at(9)) / 2) + 1;
		list.at(6) = temp;
		list.at(9) = temp;
	}

	for (int i = 0; i < list.size(); i++)
	{
		if (ans < list[i])
			ans = list[i];
	}

	cout << ans << endl;

	return 0;
}