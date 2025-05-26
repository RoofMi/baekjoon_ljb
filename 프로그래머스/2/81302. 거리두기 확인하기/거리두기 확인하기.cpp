#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solve(vector<string> map)
{
    vector<pair<int, int>> player;
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (map[i][j] == 'P')
                player.push_back(make_pair(i, j));
        }
    }
    
    for (int i = 0; i < player.size(); i++)
    {
        for (int j = i + 1; j < player.size(); j++)
        {
            if (abs(player[i].first - player[j].first) + abs(player[i].second - player[j].second) < 3)
            {
                // 가로 확인
                if (player[i].first == player[j].first)
                {
                    int dis = abs(player[i].second - player[j].second);
                    
                    if (dis == 1)
                        return 0;
                    else if (dis == 2)
                    {
                        if (map[player[i].first][(player[i].second + player[j].second) / 2] != 'X')
                            return 0;
                    }
                }
                // 세로 확인
                else if (player[i].second == player[j].second)
                {
                    int dis = abs(player[i].first - player[j].first);
                    
                    if (dis == 1)
                        return 0;
                    else if (dis == 2)
                    {
                        if (map[(player[i].first + player[j].first) / 2][player[i].second] != 'X')
                            return 0;
                    }
                }
                // 대각선 확인
                else
                {
                    if (map[player[i].first][player[j].second] != 'X' || map[player[j].first][player[i].second] != 'X')
                        return 0;
                }
            }
        }
    }
    
    return 1;
}

vector<int> solution(vector<vector<string>> places) {
    vector<int> answer;
    
    for (int i = 0; i < 5; i++)
        answer.push_back(solve(places[i]));
    
    return answer;
}