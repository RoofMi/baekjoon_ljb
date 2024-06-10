#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

vector<string> split(string str, char del) {
    vector<string> strTemp;
    stringstream ss(str);
    string temp;
    
    while (getline(ss, temp, del)) {
        strTemp.push_back(temp);
    }
    
    return strTemp;
}

vector<string> solution(vector<string> record) {
    vector<string> answer;
    unordered_map<string, string> user;

    for (int i = record.size() - 1; i >= 0; i--) {
        vector<string> user_temp = split(record[i], ' ');

        if (user_temp[0] != "Leave" && user.find(user_temp[1]) == user.end()) {
            user.insert(make_pair(user_temp[1], user_temp[2]));
        }
    }

    for (int i = 0; i < record.size(); i++) {
        vector<string> temp = split(record[i], ' ');

        if (temp[0] == "Enter") {
            string str = user.at(temp[1]) + "님이 들어왔습니다.";
            answer.push_back(str);
        }
        else if (temp[0] == "Leave") {
            string str = user.at(temp[1]) + "님이 나갔습니다.";
            answer.push_back(str);
        }
    }
    
    return answer;
}