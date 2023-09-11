#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num;
	int* array;
	int index;
	string str;
	string first;
	string second;

	cin >> num;
	cin.ignore();

	array = new int[num];
	index = 0;

	for (int i = 0; i < num; i++)
	{
		getline(cin, str);

		first = str.substr(0, str.find(" "));
		second = str.substr(str.find(" ") + 1, str.length());

		if (first.compare("push") == 0)
		{
			array[index] = stoi(second);
			index++;
		}
		if (first.compare("pop") == 0)
		{
			if (index == 0)
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << array[index - 1] << endl;
				index--;
			}
		}
		if (first.compare("size") == 0)
		{
			cout << index << endl;
		}
		if (first.compare("empty") == 0)
		{
			if (index == 0)
			{
				cout << "1" << endl;
			}
			else
			{
				cout << "0" << endl;
			}
		}
		if (first.compare("top") == 0)
		{
			if (index == 0)
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << array[index - 1] << endl;
			}
		}
	}
}