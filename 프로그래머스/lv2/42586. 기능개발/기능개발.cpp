#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> buf;
    queue<int> que;
    
    for(int i = 0; i < progresses.size(); i++){
        int days = (100 - progresses[i]) / speeds[i];
        if(days * speeds[i] + progresses[i] != 100) days++;
        buf.push_back(days);
    }
    
    que.push(buf[0]);
    for(int i = 1; i < buf.size(); i++){
        if(que.front() >= buf[i]) que.push(buf[i]);
        else{
            answer.push_back(que.size());
            while(!que.empty()) que.pop();
            que.push(buf[i]);
        }
    }
    if(!que.empty()) answer.push_back(que.size());
    
    return answer;
}