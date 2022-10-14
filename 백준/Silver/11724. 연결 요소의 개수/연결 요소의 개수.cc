#include <iostream>
#include <vector>

using namespace std;

bool visited[1001];
vector<int> line[1001];
int N, M;
int cnt;

void DFS(int index){
    visited[index] = true;
    for(int i = 0; i < line[index].size(); i++){
        int site = line[index][i];
        if(visited[site] == false) DFS(site);
    }
}

int main(void){
    int u, v;
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        cin >> u >> v;
        line[u].push_back(v);
        line[v].push_back(u);
    }
    for(int i = 1; i <= N; i++){
        if(visited[i] == false){
            cnt++;
            DFS(i);
        }
    }
    cout << cnt;
}