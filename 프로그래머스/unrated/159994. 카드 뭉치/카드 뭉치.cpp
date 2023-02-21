#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    string myAnswer = "";
    int first = 0, second = 0, goalCount = 0;
    
    for(int i = 0; i < goal.size(); i++){
        answer += goal[i];
    }
    
    while(true) {
        if((first != cards1.size()) && cards1[first] == goal[goalCount]){
            first++;
            myAnswer += goal[goalCount];
            goalCount++;
        } else if((second != cards2.size()) && cards2[second] == goal[goalCount]) {
            second++;
            myAnswer += goal[goalCount];
            goalCount++;
        } else {
            answer = "No";
            break;
        }
        if(answer == myAnswer) { 
            answer = "Yes";
            break;
        }
    }
    if(myAnswer.size() == 0) answer = "No";
    return answer;
}