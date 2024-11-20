#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int list[1001] = { 0, };
	int N, K;
	cin >> N >> K;

	int idx = K;

	vector<int> ans;

	for (int i = 1; i <= N; i++)
		list[i] = i;

	while (true)
	{
		if (list[idx] != 0)
		{
			ans.push_back(idx);
			list[idx] = 0;
		}

		if (ans.size() >= N)
			break;
		else
		{
			int move = 0;
			while (move < K)
			{
				if (idx + 1 > N)
					idx = 1;
				else
					idx += 1;

				if (list[idx] != 0)
					move++;
			}
		}
	}

	cout << '<';
	for (int i = 0; i < ans.size() - 1; i++)
		cout << ans.at(i) << ", ";
	cout << ans.back() << ">\n";

	return 0;
}