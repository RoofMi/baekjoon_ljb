#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	time_t timer;
	struct tm* t;

	timer = time(NULL);
	t = localtime(&timer); 

	cout << t->tm_year + 1900 << endl;
	cout << t->tm_mon + 1 << endl;
	cout << t->tm_mday << endl;

    return 0;
}