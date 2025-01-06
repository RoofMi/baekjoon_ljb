#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	int N, M;
	unordered_map<string, string> map;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string add, pwd;
		cin >> add >> pwd;

		map.insert(make_pair(add, pwd));
	}

	for (int i = 0; i < M; i++)
	{
		string input;
		cin >> input;

		auto val = map.find(input);
		if (val != map.end())
			cout << val->second << '\n';
	}

	return 0;
}