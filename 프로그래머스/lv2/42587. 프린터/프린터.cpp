#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue <pair<int,int>> q;
    priority_queue <int> pq;
    for(int i=0; i<priorities.size();i++){
        pq.push(priorities[i]);
        q.push({priorities[i],i});
    }


    while(!q.empty()&&!pq.empty()){
        if(q.front().first==pq.top()){
               answer++;
            if(q.front().second == location){
                return answer;
            }
            q.pop();
            pq.pop();


        }
        else{
            q.push({q.front().first,q.front().second});
            q.pop();
            
        }
    }
    return answer;
}