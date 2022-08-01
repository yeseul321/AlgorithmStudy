#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    vector<int> ans;
    
    while(n>0){
    	n--;
        ans.insert(ans.begin(),n%3);
        n /= 3;
    }
    
    for(auto it: ans){
        answer += "124"[it];
    }
    return answer;
}