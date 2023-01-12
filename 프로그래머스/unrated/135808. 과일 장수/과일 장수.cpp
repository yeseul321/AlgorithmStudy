#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int index = 0;
    int min = 0;
    vector<int> buf;
    
    sort(score.begin(), score.end(), greater<int>());
    for(int i = 0; i < score.size()/m; i++){
        for(int j = 0; j < m; j++){
            buf.push_back(score[index]);
            index++;
        }
        min = *min_element(buf.begin(), buf.end());
        answer += (min * m);
        buf.clear();
    }
    return answer;
}