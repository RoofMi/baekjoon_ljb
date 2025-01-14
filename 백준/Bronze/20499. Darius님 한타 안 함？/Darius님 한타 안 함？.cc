#include <iostream>

using namespace std;

int main() 
{
    int K, D, A;
    char slash;
    cin >> K >> slash >> D >> slash >> A;
    
    if (K + A < D || D == 0)
        cout<<"hasu";
    else
        cout<<"gosu";
    
    return 0;
}