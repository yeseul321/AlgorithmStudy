#include <string>
#include <vector>

using namespace std;

int answer = 0;

void dfs(vector<int> numbers, int target, int index, int sum, bool torf){
    if(torf == true){
        sum += numbers[index];
    }
    else{
        sum -= numbers[index];
    }
    index++;
    if(numbers.size() != index){
        dfs(numbers, target, index, sum, true);
        dfs(numbers, target, index, sum, false);
    }
    else{
        if(sum == target) answer++;
    }
}

int solution(vector<int> numbers, int target) {
    int sum = 0;
    dfs(numbers, target, 0, sum, true);
    dfs(numbers, target, 0, sum, false);
    return answer;
}