#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;
    
    for (int n = 0; n < commands.size(); n++)
    {
        for (int i = commands[n][0] - 1; i < commands[n][1]; i++)
        {
           temp.push_back(array[i]);
        }
    
        sort(temp.begin(), temp.end());
    
        answer.push_back(temp[commands[n][2] - 1]);
        
        temp.clear();
    }
    
    return answer;
}