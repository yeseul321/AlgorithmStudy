#include <string>
#include <vector>
#include <bitset>
#include <iostream>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string buf = "";
    vector<int> arr(n);
    
    for(int i = 0;i < n;i++){
        //arr.push_back(arr1[i] | arr2[i]);
        arr[i] = arr1[i] | arr2[i];
        for(int j = 0; j < n; j++){
            if(arr[i]%2 == 1) buf.insert(0, "#");
            else buf.insert(0, " ");
            arr[i] = arr[i]/2;
        }
        answer.push_back(buf);
        buf.clear();
    }
    return answer;
}