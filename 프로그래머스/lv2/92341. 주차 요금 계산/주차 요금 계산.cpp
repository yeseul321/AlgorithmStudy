#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>

using namespace std;
map<string, vector<string>> mp;

int cacul_time(string str1, string str2){
    int hour1 = stoi(str1.substr(0, 2));
    int min1 = stoi(str1.substr(3, 2));
    int hour2 = stoi(str2.substr(0, 2));
    int min2 = stoi(str2.substr(3, 2));
    
    int time = (hour2 - hour1) * 60 + (min2 - min1);
    return time;
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    stringstream ss;
    for(auto record: records) {
        ss.str(record);
        string time, number, status; 
        ss >> time >> number >> status;
        mp[number].push_back(time);
        ss.clear();
    }
    for(auto a : mp){
        if(a.second.size() % 2 == 1)
            a.second.push_back("23:59");
        vector<string> info = a.second;
        int total = 0;
        for(int i=0; i<info.size()-1; i+=2) {
            total += cacul_time(info[i], info[i+1]);
        }
        int price = fees[1];
        if(fees[0] < total){
            price += ceil((total-fees[0]) / (double)fees[2]) * fees[3];
        }
        answer.push_back(price);
    }
    return answer;
}