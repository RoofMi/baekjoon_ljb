#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long A, B, C;
	cin >> A>> B >> C;
    
	cout << max(A * B / C, A * C / B) << endl;
    
    return 0;
}