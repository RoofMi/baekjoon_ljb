#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct {
	bool operator()(string a, string b) {
		if (a.length() != b.length())
		{
			return a.length() < b.length();
		}
		else
		{
			return a < b;
		}
	}
} Sorting;

int main()
{
	int num;
	string str;

	cin >> num;
	cin.ignore();

	vector<string> array;

	for (int i = 0; i < num; i++)
	{
		getline(cin, str);

		if (find(array.begin(), array.end(), str) == array.end())
		{
			array.push_back(str);
		}
	}

	sort(array.begin(), array.end(), Sorting);

	for (int i = 0; i < array.size(); i++)
	{
		cout << array[i] << "\n";
	}
}