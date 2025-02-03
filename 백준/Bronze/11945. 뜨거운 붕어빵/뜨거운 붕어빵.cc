#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str[10];
    int N, M;
	cin >> N >> M;
    
	for (int i = 0; i < N; i++)
        cin >> str[i];
    
	for (int i = 0; i < N; i++)
    {
		for (int j = M - 1; j >= 0; j--)
            cout << str[i][j];
        
		cout << '\n';
	}
    
    return 0;
}