#include <iostream>
#define MAX 1000001
using namespace std;

int n, m;
bool arr[MAX];

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    cin >> m >> n;
    arr[0] = arr[1] = true;
    for(int i=2;i*i<MAX;i++){
        if(arr[i])continue;
        for(int j=i*i;j<MAX;j+=i){
            arr[j] = true;
        }
    }
    for(int i=m;i<=n;i++){
        if(!arr[i]){
            cout<<i<<"\n";
        }
    }
    return 0;
}