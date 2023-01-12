#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> best;
    
    for(int i = 0; i < score.size(); i++){
        best.push_back(score[i]);
        sort(best.begin(), best.end(), greater<int>());
        if(i >= k){
            best.pop_back();
        }
        answer.push_back(best[best.size()-1]);
    }
    return answer;
}