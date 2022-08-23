#include <iostream>

using namespace std;

int n, m, arr[1000001], low = 1, high = 2e9;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for(int i=0;i<n;i++)cin >> arr[i];
    while(low <= high){
        long long mid = (low + high) / 2, sum = 0;
        for(int i=0;i<n;i++){
            if(arr[i] > mid){
                sum += arr[i] - mid;
            }
        }
        if(sum >= m)low = mid + 1;
        else high = mid - 1;
    }
    cout << high;
    return 0;
}