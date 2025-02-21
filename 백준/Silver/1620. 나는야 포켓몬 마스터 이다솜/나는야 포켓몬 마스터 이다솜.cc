#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{
	vector<string> answer;
	vector<string> nameList;
	map<string, int> idxList;
	int M, N;
	cin >> M >> N;

	for (int i = 0; i < M; i++)
	{
		string str;
		cin >> str;

		nameList.push_back(str);
		idxList.insert(make_pair(str, i + 1));
	}

	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;

		if (str[0] >= 'A' && str[0] <= 'Z')
			answer.push_back(to_string(idxList.find(str)->second));
		else
			answer.push_back(nameList[stoi(str) - 1]);
	}

	for (int i = 0; i < N; i++)
		cout << answer[i] << '\n';

	return 0;
}