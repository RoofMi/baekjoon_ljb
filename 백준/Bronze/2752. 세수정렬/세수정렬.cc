#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
int main()
{
	vector<int> list;
    
    for (int i = 0; i < 3; i++)
    {
        int temp;
        cin >> temp;
        
        list.push_back(temp);
    }
 
	sort(list.begin(), list.end());
    
	cout << list.at(0) << ' ' << list.at(1) << ' ' << list.at(2) << '\n';
 
	return 0;
}