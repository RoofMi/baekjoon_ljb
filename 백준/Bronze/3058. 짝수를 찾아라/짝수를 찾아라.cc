#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    for(int i = 0; i < T; i++)
    {
        int min = 100;
        int sum = 0;
        
        for(int j = 0; j < 7; j++)
        {
            int temp;
            cin >> temp;
            
            if(temp % 2 == 0)
            {
                sum += temp;
                
                if(temp < min)
                    min = temp;
            }
        }
        
        cout << sum << " " << min << '\n';
    }
    
    return 0;
}