#include <iostream>

using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b;
    
    if(a < b)
        cout << "-1" << '\n';
    else
    {
        x = (a + b) / 2;
        y = (a - b) / 2;
        
        if(x + y == a && x - y == b)
            cout << x << " " << y << '\n';
        else
            cout << "-1" << '\n';
    }
    
    return 0;
}