#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int N;
vector<vector<int>> list;
vector<bool> visited;
int answer = INT_MAX;

void calculate()
{
	int startVal = 0;
	int linkVal = 0;	

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (visited[i] && visited[j])
				startVal += list[i][j];

			if (!visited[i] && !visited[j])
				linkVal += list[i][j];
		}
	}

	answer = min(answer, startVal > linkVal ? startVal - linkVal : linkVal - startVal);

	return;
}

void generateTeam(int num, int idx)
{
	if (num == N / 2) 
		calculate();

	for (int i = idx; i < N; i++)
	{
		visited[i] = true;
		generateTeam(num + 1, i + 1);
		visited[i] = false;
	}
}

int main()
{
	cin >> N;

	list = vector<vector<int>>(N, vector<int>(N, 0));
	visited = vector<bool>(N, false);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int temp;
			cin >> temp;
			list[i][j] = temp;
		}
	}

	generateTeam(0 ,0);

	cout << answer;

	return 0;
}