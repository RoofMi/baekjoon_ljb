#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct number {
	int first;
	int second;
} Number;

struct {
	bool operator()(Number a, Number b) {
		if (a.second != b.second)
		{
			return a.second < b.second;
		}
		else
		{
			return a.first < b.first;
		}
	}
} SortingY;

int main()
{
	int num;
	int first;
	int second;

	cin >> num;
	cin.ignore();

	vector<Number> array;

	for (int i = 0; i < num; i++)
	{
		cin >> first >> second;

		array.push_back({ first, second });
	}

	sort(array.begin(), array.end(), SortingY);

	for (int i = 0; i < num; i++)
	{
		cout << array[i].first << " " << array[i].second << "\n";
	}
}