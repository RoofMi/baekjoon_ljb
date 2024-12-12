#include <iostream>

using namespace std;

int main()
{
    long long input;
    cin >> input;
    
    if (input % 3 == 1)
        cout << "U" << endl;
    else if (input % 3 == 2)
        cout << "O" << endl;
    else
        cout << "S" << endl;
    
    return 0;
}