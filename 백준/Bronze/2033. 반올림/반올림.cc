#include <iostream>

using namespace std;

int main()
{
  int N, temp;
  int check = 10;
  cin >> N;

  while (N > check)
  {
    temp = N % check;
    N -= temp;
      
    if (temp >= 5 * (check / 10))
      N += check;
    
    check *= 10;
  }
    
  cout << N << endl;

  return 0;
}