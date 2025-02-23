#include <iostream>
#include <map>

using namespace std;

int solve()
{
	map<string, int> list;
	int value, answer = 1;
	cin >> value;

	for (int i = 0; i < value; i++)
	{
		string name, type;
		cin >> name >> type;

		if (list.find(type) == list.end())
			list.insert(make_pair(type, 1));
		else
			list[type]++;
	}

	for (auto it : list)
		answer *= (it.second + 1);

	return answer - 1;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
		cout << solve() << '\n';

	return 0;
}