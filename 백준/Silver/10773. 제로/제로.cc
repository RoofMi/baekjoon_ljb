#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> stack;
	int K, ans = 0;
	cin >> K;

	for (int i = 0; i < K; i++)
	{
		int temp;
		cin >> temp;

		if (temp == 0)
			stack.pop();
		else
			stack.push(temp);
	}

	while (!stack.empty())
	{
		ans += stack.top();
		stack.pop();
	}

	cout << ans << endl;

	return 0;
}