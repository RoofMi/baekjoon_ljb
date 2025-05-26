#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string str = s;
    
    vector<string> value = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    
    for (int i = 0; i < value.size(); i++)
    {
        size_t pos = 0;
        
       while ((pos = str.find(value[i])) != string::npos)
       {
           str.replace(pos, value[i].length(), to_string(i));
       }
    }
    
    return stoi(str);
}