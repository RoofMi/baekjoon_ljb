#include<iostream>

using namespace std;

int main()
{
	string input;
	cin >> input;
    
    if (input == "SONGDO")
		cout << "HIGHSCHOOL" << '\n';
	else if (input == "CODE")
		cout << "MASTER" << '\n';
	else if (input == "2023")
		cout << "0611" << '\n';
    else if (input == "ALGORITHM")
		cout << "CONTEST" << '\n';

	return 0;
}