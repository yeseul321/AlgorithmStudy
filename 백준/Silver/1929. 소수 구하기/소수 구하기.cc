#include <iostream>
#include <cmath>

#define MAX 1000001
using namespace std;

bool arr[MAX];
int M, N;

int main(void){
    cin >> M >> N;
    arr[0] = arr[1] = true;
    for(int i = 2; i * i <= MAX; i++){
        if(arr[i]) continue;
        for(int j = i * i; j < MAX; j += i){
            arr[j] = true;
        }
    }
    for(int i = M; i <= N; i++){
        if(!arr[i]) cout << i << '\n';
    }
    return 0;
}