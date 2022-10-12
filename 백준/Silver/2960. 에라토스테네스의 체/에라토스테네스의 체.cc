#include <iostream>
#include <cmath>

#define MAX 1001
using namespace std;

int N, K, count;

int main(void){
    cin >> N >> K;
    bool arr[N+1];
    for(int i = 0; i <= N; i++) arr[i] = true;
    for(int i = 2; i <= N; i++){
        if(arr[i] == false) continue;
        for(int j = 1; i * j <= N; j++){
            if(arr[i * j] == true){
                arr[i * j] = false;
                count++;
            }
            if(count == K){
                cout << i * j;
                return 0;
            }
        }
    }
}