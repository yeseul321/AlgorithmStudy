#include <string>
#include <vector>
#include <regex>

using namespace std;

int solution(string s) {
    int answer = 0;
    string str1 = regex_replace(s, regex("one"), "1");
    str1 = regex_replace(str1, regex("two"), "2");
    str1 = regex_replace(str1, regex("three"), "3");
    str1 = regex_replace(str1, regex("four"), "4");
    str1 = regex_replace(str1, regex("five"), "5");
    str1 = regex_replace(str1, regex("six"), "6");
    str1 = regex_replace(str1, regex("seven"), "7");
    str1 = regex_replace(str1, regex("eight"), "8");
    str1 = regex_replace(str1, regex("nine"), "9");
    str1 = regex_replace(str1, regex("zero"), "0");
    answer = stoi(str1);
    return answer;
}