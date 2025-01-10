#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
    cin >> N;
    
	for (int i = 0; i < N; i++)
    {
		string str;
        cin >> str;	
        
		cout << ((str.back() - '0') % 2 ? "odd" : "even") << '\n';
	}
    
    return 0;
}