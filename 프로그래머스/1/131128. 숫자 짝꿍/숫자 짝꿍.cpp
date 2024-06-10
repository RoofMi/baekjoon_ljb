#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    
    int Xnum[10];
    int Ynum[10];
    
    for (int i = 0; i < 10; i++) {
        Xnum[i] = 0;
        Ynum[i] = 0;
    }
    
    for (int i = 0; i < X.length(); i++) {
        for (int j = 0; j < 10; j++) {
            if (X[i] == '0' + j) {
                Xnum[j] += 1;
            }
        }
    }
    
    for (int i = 0; i < Y.length(); i++) {
        for (int j = 0; j < 10; j++) {
            if (Y[i] == '0' + j) {
                Ynum[j] += 1;
            }
        }
    }
    
    for (int i = 9; i >= 0; i--) {
        string str;
        
        if (Xnum[i] < Ynum[i]) {
            str = to_string(i);
            
            for (int j = 0; j < Xnum[i]; j++) {
                answer += str;
            }
        }
        else {
            str = to_string(i);
            
            for (int j = 0; j < Ynum[i]; j++) {
                answer += str;
            }
        }
    }
    
    if (answer[0] == '0')
        return "0";
    else if (answer == "")
        return "-1";
    else
        return answer;
}