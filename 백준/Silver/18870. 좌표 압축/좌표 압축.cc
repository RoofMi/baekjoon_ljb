#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> list;
	vector<int> solve;
	
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;

		list.push_back(temp);
		solve.push_back(temp);
	}

	sort(solve.begin(), solve.end());
	solve.erase(unique(solve.begin(), solve.end()), solve.end());

	for (int i = 0; i < N; i++)
		cout << lower_bound(solve.begin(), solve.end(), list[i]) - solve.begin() << " ";

	cout << '\n';

	return 0;
}