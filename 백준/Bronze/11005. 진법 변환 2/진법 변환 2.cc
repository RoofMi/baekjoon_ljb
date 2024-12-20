#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N, B;
    cin >> N >> B;

    string str;
    
    while (N != 0)
    {
        int temp = N % B;
        
        if (temp > 9)
        {
            temp = temp - 10 + 'A';
            str += temp;
        }
        else
            str += ('0' + temp);
        
        N /= B;
    }
    
    reverse(str.begin(), str.end());

    cout << str << '\n';

    return 0;
}