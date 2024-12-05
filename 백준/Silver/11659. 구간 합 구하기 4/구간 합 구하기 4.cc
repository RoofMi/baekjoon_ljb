#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	int N, M;
	cin >> N >> M;

	vector<int> list = vector<int>(N, 0);
	vector<int> prefix = vector<int>(N, 0);
	vector<int> ans;

	for (int i = 0; i < N; i++)
		cin >> list[i];

	prefix[0] = list[0];

	for (int i = 1; i < N; i++)
		prefix[i] = prefix[i - 1] + list[i];

	for (int m = 0; m < M; m++)
	{
		int start, end;
		cin >> start >> end;

		if (start - 2 >= 0)
			ans.push_back(prefix[end - 1] - prefix[start - 2]);
		else
			ans.push_back(prefix[end - 1]);
	}

	for (int val : ans)
		cout << val << '\n';

	return 0;
}