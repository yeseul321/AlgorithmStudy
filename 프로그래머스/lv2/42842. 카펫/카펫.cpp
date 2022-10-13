#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int i = 1, j = yellow;
    while(i <= yellow){
        if((i * 2 + 4 + j * 2) == brown){
            answer.push_back(j + 2);
            answer.push_back(i + 2);
            break;
        }
        else{
            i++;
            while(yellow % i != 0){
                i++;
            }
            j = yellow / i;
        }
    }
    return answer;
}