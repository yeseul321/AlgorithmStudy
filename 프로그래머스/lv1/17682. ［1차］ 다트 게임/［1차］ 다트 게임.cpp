#include <string>
#include <regex>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int j = 0;
    int score[3] = {0, };
    int sc = 0;
    for(int i = 0;i<3;i++){
        if(dartResult[j+1] == '0') {
            sc = 10;
            j += 1;
        }
        else sc = dartResult[j] - '0';
        j++;
        while(isdigit(dartResult[j]) == false){
            if(dartResult[j] == 'S' || dartResult[j] == 'D' || dartResult[j] == 'T'){
                if(dartResult[j] == 'D') sc = pow(sc, 2);
                else if (dartResult[j] == 'T') sc = pow(sc, 3);
                j++;
            }
            if(dartResult[j] == '*' || dartResult[j] == '#'){
                if(dartResult[j] == '*') {
                    if(i!=0) {
                        score[i-1] = score[i-1]*2;
                        sc = sc*2;
                    }
                    else sc = sc*2;
                }
                else{
                    sc = sc*(-1);
                }
                j++;
            }
            score[i] = sc;
            if(i==2) break;
        }
    }
    answer = score[0] + score[1] + score[2];
    return answer;
}