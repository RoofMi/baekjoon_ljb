#include <string>
#include <vector>
#include <queue>

using namespace std;
vector<string> storageMap;

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void lift(char req)
{
    int y = storageMap.size();
    int x = storageMap[0].size();
    
    queue<pair <int, int>> que;
    vector<vector<bool>> visited (y, vector<bool>(x, false));
    
    for (int i = 0; i < y; i++)
        que.push(make_pair(i, 0));
    
    for (int i = 0; i < y; i++)
        que.push(make_pair(i, x - 1));
    
    for (int i = 1; i < x - 1; i++)
        que.push(make_pair(0, i));
    
    for (int i = 1; i < x - 1; i++)
        que.push(make_pair(y - 1, i));
    
    while(!que.empty())
    {
        int currentY = que.front().first;
        int currentX = que.front().second;
        
        que.pop();
        
        if (storageMap[currentY][currentX] == req)
            storageMap[currentY][currentX] = '-';
            
        else if (storageMap[currentY][currentX] == '-' && !visited[currentY][currentX])
        {
            for (int i = 0; i < 4; i++)
            {
                int nextY = currentY + dy[i];
                int nextX = currentX + dx[i];
                
                if (nextY >= 0 && nextY < y && nextX >= 0 && nextX < x && !visited[nextY][nextX])
                    que.push(make_pair(nextY, nextX));
            }
        }
        
        visited[currentY][currentX] = true;
    }
}

void crain(char req)
{
    for (int i = 0; i < storageMap.size(); i++)
    {
        for (int j = 0; j < storageMap[0].size(); j++)
            storageMap[i][j] = (storageMap[i][j] == req) ? '-' : storageMap[i][j];
    }
}

int solution(vector<string> storage, vector<string> requests) {
    int answer = 0;
    
    storageMap = storage;
    
    for (string req : requests)
    {
        if (req.length() == 1)
            lift(req[0]);
        else
            crain(req[0]);
    }
    
    for (int i = 0; i < storageMap.size(); i++)
    {
        for (int j = 0; j < storageMap[0].size(); j++)
        {
            if (storageMap[i][j] != '-')
                answer++;
        }
    }
    
    
    return answer;
}