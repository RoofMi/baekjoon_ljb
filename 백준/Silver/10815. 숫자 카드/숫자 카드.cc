#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> own;
vector<int> compare;
int N, M;

int check(int target, int start, int end)
{
	if (start > end)
		return 0;

	int mid = (start + end) / 2;

	if (target == own.at(mid))
		return 1;
	else if (target > own.at(mid))
		return check(target, mid + 1, end);
	else
		return check(target, start, mid - 1);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int temp;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		own.push_back(temp);
	}

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> temp;
		compare.push_back(temp);
	}

	sort(own.begin(), own.end());

	for (int i = 0; i < M; i++)
	{
		cout << check(compare.at(i), 0, N - 1) << " ";
	}

	return 0;
}