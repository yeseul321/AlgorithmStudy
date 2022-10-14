#include <iostream>

using namespace std;
bool arr[1001];

int main(void){
    arr[0] = arr[1] = true;
    for(int i = 2; i <= 1001; i++){
        if(!arr[i]){
            for(int j = 2; i * j < 1001; j++){
                arr[i * j] = true;
            }
        }
    }
    int cnt = 0;
    int N = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        int num = 0;
        cin >> num;
        if(!arr[num]) cnt++;
    }
    cout << cnt;
}