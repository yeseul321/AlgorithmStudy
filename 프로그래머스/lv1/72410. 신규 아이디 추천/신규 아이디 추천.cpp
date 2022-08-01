#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string new_id) {
    string answer = "";
    int i = 0;

    for(i = 0; i < new_id.length(); i++){
        new_id[i] = tolower(new_id[i]);
    }

    for(auto i : new_id){
        if((i >= 'a' && i <= 'z') || isdigit(i) || i == '-' || i == '_' || i == '.')
            answer.push_back(i);
    }

    i = 1;
    while (i < answer.length()){
        if (answer[i - 1] == '.' && answer[i] == '.'){
            answer.erase(answer.begin() + i);
            continue;
        }
        i++;
    }

    if(answer[0] == '.')
        answer.erase(answer.begin());
    
    if(answer[answer.length() - 1] == '.')
        answer.erase(answer.end() - 1);

    if(answer.length() == 0)
        answer.push_back('a');
    
    if(answer.length() >= 16){
        answer.erase(answer.begin() + 15, answer.end());
        if(answer[answer.length() - 1] == '.')
            answer.erase(answer.end() - 1);
    }
    
    if(answer.length() <= 2){
        char c = answer[answer.length() - 1];
        while(answer.length() != 3){
            answer.push_back(c);
        }
    }
    return answer;
}