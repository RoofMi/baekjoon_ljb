#include <iostream>

using namespace std;

int main()
{
    int N, M;
    int list[101] = { 0, };
    int i, j, k;
    
    cin >> N >> M;

    for(int m = 0; m < M; m++)
    {
        cin >> i >> j >> k;
        
        for(int a = i; a <= j; a++)
            list[a] = k;
    }

    for(int t = 1; t < N; t++)
        cout << list[t] << ' ';
    
    cout << list[N] << endl;
    
    return 0;
}