#include <iostream>

using namespace std;

int main()
{
    int T, M;
    cin >> T;

    while (T--)
    {
        int Q = 0, D = 0, N = 0, P = 0;
        
        cin >> M;
        
        while (M)
        {
            if (M >= 25)
            {
                Q++;
                M -= 25;
            }
            else if (M >= 10)
            {
                D++;
                M -= 10;
            }
            else if (M >= 5)
            {
                N++;
                M -=5 ;
            }
            else
            {
                P++;
                M -= 1;
            }
        }
        
        cout << Q << " " << D << " " << N << " " << P << '\n';
    }
    
    return 0;
}