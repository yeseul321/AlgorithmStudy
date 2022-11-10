#include <string>
#include <vector>
#include <queue>

using namespace std;

queue<int> bridge_qu;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int sum = 0, tmp = 0;
    int i = 0;
    
    while(1){
        //모든 트럭을 다리에 올렸다. 
        //  -> i(다리에 올라갔던 트럭의 개수)가 원래 트럭 개수와 같을 때 while문 탈출
        if(i == truck_weights.size()) break;
        
        //그게 아니라면 경과시간 늘린 후 tmp에 현재 대기중인 트럭의 무게 넣어줌.
        answer ++;
        tmp = truck_weights[i];
        
        //트럭이 다리를 모두 지났을 때, sum에서 무게를 빼주고 bridge_qu에서도 빼줌.
        if(bridge_qu.size() == bridge_length) {
            sum -= bridge_qu.front();
            bridge_qu.pop();
        }
        
        //현재 트럭을 다리 위에 올릴 수 있는지 무게 검사 후 안된다면 0만 추가함.(거리 측정 위함)
        if((sum + tmp) > weight) bridge_qu.push(0);
        
        //다리에 올릴 수 있다면 sum, bridge_qu를 모두 변경한 후 i도 변경해줌.
        else{
            sum += tmp;
            bridge_qu.push(tmp);
            i++;
        }
    }
    //마지막 트럭을 올리자마자 while문이 종료되었으므로 마지막 트럭이 다리를 모두 지나는 시간 더해줌.
    answer += bridge_length;
    
    
    return answer;
}