#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";

    int i1 = 0;
    int i2 = 0;

    for(const auto& v : goal)
    {
        if(i1 != cards1.size() && cards1[i1] == v)
        {
            i1++;
        }
        else if(i2 != cards2.size() && cards2[i2] == v)
        {
            i2++;
        }
        else
        {
            answer = "No";
            break;
        }
    }
    return answer;
}