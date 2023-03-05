#include <string>
#include <vector>
#include <stack>
#include <sstream>

using namespace std;

int solution(string s) {
    stack<int> st;
    int answer = 0;
    stringstream ss(s);
    ss.str(s);
    
    string word;
    while(ss >> word) {
        if (word == "Z") {
            st.pop();
        } else {
            st.push(stoi(word));
        }
    }
    while(!st.empty()){
        answer += st.top();
        st.pop();
    }
    
    return answer;
}