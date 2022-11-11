#include <string>
#include <vector>
#define MAX 200

using namespace std;

bool isvisited[MAX] = {false, };

void dfs(int index, int n, vector<vector<int>> computers){
    isvisited[index] = true;
    for(int i = 0; i < n; i++){
        if(computers[index][i] == 1 && isvisited[i] == false)
        dfs(i, n, computers);
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for(int i = 0; i < n; i++){
        if(!isvisited[i]){
            dfs(i, n, computers);
            answer++;
        }
    }
    return answer;
}