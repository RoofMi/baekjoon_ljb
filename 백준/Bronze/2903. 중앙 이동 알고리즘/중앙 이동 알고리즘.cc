#include<iostream>

using namespace std;

int main() 
{
    int ans = 2;

	int repeat;
	cin >> repeat;

	while (repeat--)
        ans = (ans * 2) - 1;

	cout << ans * ans;
    
    return 0;
}