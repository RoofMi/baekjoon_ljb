#include <string>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    
    for (int m = 0; m < schedules.size(); m++)
    {
        int currentday = startday;
        bool clear = true;
        
        for (int i = 0; i < 7; i++)
        {
            if (currentday == 6)
            {
                currentday++;
                continue;
            }
            else if (currentday == 7)
            {
                currentday = 1;
                continue;
            }
            
            int timelog = (timelogs[m][i] / 100 * 60) + (timelogs[m][i] % 100);
            int sche = (schedules[m] / 100 * 60) + (schedules[m] % 100);
            
            if (timelog - sche > 10)
            {
                clear = false;
                break;
            }
            
            currentday++;
        }
        
        if (clear)
            answer++;
    }
    
    return answer;
}