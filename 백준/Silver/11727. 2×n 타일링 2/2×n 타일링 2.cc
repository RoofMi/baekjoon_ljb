#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> list;
	int n;
	cin >> n;

	list.push_back(0);
	list.push_back(1);
	
	for (int i = 2; i <= n; i++)
	{
		if (i % 2 == 0)
			list.push_back(((list[i - 1] * 2) + 1) % 10007);
		else
			list.push_back(((list[i - 1] * 2) - 1) % 10007);
	}

	cout << list[n] << endl;

	return 0;
}