#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    string sequence = "";
    for (auto i : ingredient) {
        sequence += to_string(i);
        int len = sequence.length();
        if (len >= 4) {
            int idx = len - 4;
            string temp = sequence.substr(idx);
            if (temp == "1231") { 
                sequence = sequence.substr(0, idx);
                answer++;
            }
        }
    }
    return answer;
}