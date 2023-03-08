#include <vector>

using namespace std;
vector<vector<int>> ans;
void hanoi(int from, int mid, int to, int n){
    if(!n) {return;}
    hanoi(from,to,mid,n-1);
    ans.push_back({from,to});
    hanoi(mid,from,to,n-1);
}

vector<vector<int>> solution(int n) {
    for(auto a : ans) a.clear();
    hanoi(1,2,3,n);
    return ans;
}