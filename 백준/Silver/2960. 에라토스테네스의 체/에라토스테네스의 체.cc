#include <iostream>
#include <cmath>

#define MAX 10001

using namespace std;

int main(void){
    int n, k, num = 0;
    cin >> n >> k;
    int arr[MAX];
    
    for(int i = 2; i <= n; i++){
        arr[i] = 1;
    }
    
    for(int i = 2; i <= n; i++){
        for(int j = 1; j * i <= n; j++){
            if(arr[i * j] == 1){
                arr[i * j] = 0;
                num++;
                
                if(num == k){
                    cout << i * j;
                    return 0;
                }
            }
        }
    }
   
}