#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> list;

int calculate()
{
	int answer = 0;
	int i, j;

	for (int k = 0; k < N; k++)
	{
		i = 0;
		j = N - 1;

		while (i < j)
		{
			if (list[i] + list[j] == list[k])
			{
				if (i != k && j != k)
				{
					answer++;

					break;
				}
				else if (i == k)
				{
					i++;
				}
				else if (j == k)
				{
					j--;
				}
			}
			else if (list[i] + list[j] < list[k])
			{
				i++;
			}
			else
			{
				j--;
			}
		}
	}

	return answer;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	int temp;

	for (int i = 0; i < N; i++) 
	{
		cin >> temp;
		list.push_back(temp);
	}

	sort(list.begin(), list.end());

	cout << calculate() << endl;

	return 0;
}