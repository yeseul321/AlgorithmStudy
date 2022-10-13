#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> nums;

bool cmp(string a, string b){
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    string answer = "";
    for(auto i : numbers) nums.push_back(to_string(i));
    sort(nums.begin(), nums.end(), cmp);
    if(nums[0] == "0") return "0";
    for(auto s : nums) answer += s;
    return answer;
}