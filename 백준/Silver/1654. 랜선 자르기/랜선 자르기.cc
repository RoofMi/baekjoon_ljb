#include <iostream>
#include <vector>

using namespace std;

vector<int> list;
int N;

int calculate(unsigned int start, unsigned int end, int ans)
{
	if (start > end)
		return ans;

	unsigned int len = (start + end) / 2;
	int count = 0;

	for (int i = 0; i < list.size(); i++)
		count += list.at(i) / len;

	if (count >= N)
		return calculate(len + 1, end, ans > len ? ans : len);
	else
		return calculate(start, len - 1, ans);
}

int main()
{
	int K, max = 0;
	cin >> K >> N;

	for (int i = 0; i < K; i++)
	{
		int temp;
		cin >> temp;
		
		if (max < temp)
			max = temp;

		list.push_back(temp);
	}

	cout << calculate(1, max, 0) << endl;

	return 0;
}