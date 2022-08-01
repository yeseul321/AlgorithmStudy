#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    vector<int> result(12);
    int count_zero = 0;
    int count_cor = 0;

    sort(lottos.begin(), lottos.end());
    sort(win_nums.begin(), win_nums.end());

    while(lottos[count_zero] == 0) count_zero++;

    count_cor = set_intersection(lottos.begin(), lottos.end(), win_nums.begin(), win_nums.end(), result.begin()) - result.begin();

    if((count_zero + count_cor) < 2) answer.push_back(6);
    else answer.push_back(7 - (count_zero + count_cor));

    if(count_cor == 0) count_cor++;
    answer.push_back(7 - count_cor);

    return answer;
}