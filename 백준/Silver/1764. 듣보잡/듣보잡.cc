#include <iostream>
#include <set>

using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	int N, M;
	set <string> list;
	set <string> ans;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string temp;
		cin >> temp;

		list.insert(temp);
	}

	for (int i = 0; i < M; i++)
	{
		string temp;
		cin >> temp;

		auto check = list.find(temp);
		if (check != list.end())
			ans.insert(temp);
	}

	cout << ans.size() << '\n';
	for (string str : ans)
		cout << str << '\n';

	return 0;
}