#include <iostream>

using namespace std;

int main() 
{
    double list[5] = { 350.34,230.9,190.55,125.3,180.9 };
    double ans;
    int N;
    cin >> N;
    
    while (N--)
    {
        ans = 0;
        
        for (int i = 0; i < 5; i++)
        {
            double x;
            cin >> x;
            
            ans += list[i] * x;
        }
        
        printf("$%.2f\n", ans);
    }
    
    return 0;
}