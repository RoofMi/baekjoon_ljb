#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int num;
	int first;
	int second;

	cin >> num;
	cin.ignore();

	vector <pair<int, int>> array;

	for (int i = 0; i < num; i++)
	{
		cin >> first >> second;

		array.push_back(pair<int, int>(first, second));
	}

	sort(array.begin(), array.end());

	for (int i = 0; i < num; i++)
	{
		cout << array[i].first << " " << array[i].second << "\n";
	}
}