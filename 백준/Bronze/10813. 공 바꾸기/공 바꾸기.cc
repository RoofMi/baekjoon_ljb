#include <iostream>

using namespace std;

int list[101] = { 0, };

void swap(int v1, int v2)
{
    int temp = list[v1];
    list[v1] = list[v2];
    list[v2] = temp;
}

int main()
{
    int N, M;
    cin >> N >> M;

    for(int a = 1; a <= N; a++)
        list[a] = a;

    for(int a = 0; a < M; a++)
    {
        int i, j;
        cin >> i >> j;
        
        swap(i, j); 
    }
    
    for(int a = 1; a < N; a++)
        cout << list[a] << ' ';
    
    cout << list[N] << endl;

    return 0;
}