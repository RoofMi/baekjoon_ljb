#include<iostream>

using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    int list[1000];
    int count = 0;
    
    for (int i = 1; count < 1000; i++)
    {
        for (int j = 0; j < i; j++)
        {
            list[count++] = i;
            if (count == 1000)
                break;
        }
    }
    
    int sum = 0;
    for (int i = A - 1; i <= B - 1; i++)
        sum += list[i];
    
    cout << sum << endl;
    
    return 0;
}