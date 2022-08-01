#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer, inout;
    string s[3];
    unordered_map<string, string> id_name;
    
    for(int i = 0; i< record.size(); i++){
        stringstream ss(record[i]);
        ss >> s[0] >> s[1] >> s[2];
        
        if(s[0] == "Enter"){
            id_name[s[1]] = s[2];
            inout.push_back(s[1]);
            answer.push_back("님이 들어왔습니다.");
        }
        else if(s[0] == "Leave"){
            inout.push_back(s[1]);
            answer.push_back("님이 나갔습니다.");
        }
        else if(s[0] == "Change"){
            id_name[s[1]] = s[2];
        }
    }
    
    for(int i = 0; i < inout.size(); i++){
        answer[i] = id_name[inout[i]] + answer[i];
    }
    
    return answer;
}