#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string str;
    int n, sum = 0;;
    cin >> str >> n;

    for (int i = 0; i < str.length(); i++)
    {
        int temp = str[str.length() - (i + 1)];
        
        if ('0' <= temp && temp <= '9')
            temp = temp - '0';
        else
            temp = temp + 10 - 'A';
        
        sum += (temp * (int)pow(n, i));
    }
    
    cout << sum << '\n';

    return 0;
}