#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool sorting(pair<int, string> a, pair<int, string> b)
{
	if (a.first < b.first)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int input;
	int first;
	string second;

	cin >> input;
	cin.ignore();

	vector <pair<int, string>> list;

	for (int i = 0; i < input; i++)
	{
		cin >> first >> second;

		list.push_back(pair<int, string>(first, second));
	}

	stable_sort(list.begin(), list.end(), sorting);

	for (int i = 0; i < input; i++)
	{
		cout << list[i].first << " " << list[i].second << "\n";
	}

	return 0;
}