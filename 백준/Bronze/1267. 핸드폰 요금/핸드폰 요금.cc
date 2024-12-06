#include <iostream>

using namespace std;
 
int main()
{
	int N;
    int M = 0, Y = 0;
	cin >> N;
 
	for (int i = 0; i < N; i++)
    {
        int temp;
		cin >> temp;
        
		Y += (temp / 30 + 1) * 10;
		M += (temp / 60 + 1) * 15;
	}
	if (M < Y)
        cout << "M " << M;
	else if (M > Y)
        cout << "Y " << Y;
	else if (M == Y)
        cout << "Y M " << M;
 
	return 0;
}