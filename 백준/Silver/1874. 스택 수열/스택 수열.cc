#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
	vector <char> ans;
	stack <int> stack;
	int N;
	int value = 1;
	bool clear = true;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;

		while (value <= input)
		{
			stack.push(value);
			value++;

			ans.push_back('+');
		}

		if (stack.top() == input)
		{
			stack.pop();
			ans.push_back('-');
		}
		else
			clear = false;
	}

	if (clear)
	{
		for (char ch : ans)
			cout << ch << '\n';
	}
	else
		cout << "NO" << endl;

	return 0;
}