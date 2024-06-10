#include <string>
#include <vector>

using namespace std;

int score(vector<int> cards, vector<bool> open, int i, int time) {
    int idx = i;
    int count = 0;
    
    while(true) {
        if (!open[idx]) {
            open[idx] = true;
            idx = cards[idx] - 1;
            count++;
        }
        else
            break;
    }
    
    if (count >= cards.size())
        return 0;
    else if (time == 2)
        return count;
    
    int max = 0;
    
    for(int i = 0; i < cards.size(); i++) {
        if (!open[i]) {
            idx = i;
            
            int sum = score(cards, open, idx, 2);
        
            if (max < sum)
                max = sum;
        }
    }

    return count * max;
}

int solution(vector<int> cards) {
    int answer = 0;
    
    vector<bool> open;
    
     for (int i = 0; i < cards.size(); i++) {  
         open.push_back(false);
     }
    
    for (int i = 0; i < cards.size(); i++) {    
        int sum = score(cards, open, i, 1);
        if (answer < sum)
            answer = sum;
    }
    
    return answer;
}