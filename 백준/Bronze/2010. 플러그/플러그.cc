#include <iostream>

using namespace std;

int main()
{
    int N, input;
    int answer = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> input;

        answer += input;
    }

    answer = answer - (N - 1);

    cout << answer << endl;

    return 0;
}