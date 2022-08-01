#include <string>
#include <vector>

using namespace std;

int check_dist(int hand, int num){
    int dist = 0;
    
    dist += abs((hand-1)/3 - (num-1)/3);
    dist += abs((hand-1)%3 - (num-1)%3);
    return dist;
}

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int number = 0;
    int left=10, right=12;
    int left_dist=0, right_dist=0;
    for(int i=0;i<numbers.size();i++){
        number = numbers[i];
        if(number==0) number = 11;
        if(number%3==1){
            answer+="L";
            left = number;
        }
        else if(number%3==0){
            answer+="R";
            right = number;
        }
        else if(number%3==2){
            left_dist = check_dist(left, number);
            right_dist = check_dist(right, number);
            
            if(left_dist>right_dist){
                answer+="R";
                right = number;
            }
            else if(left_dist<right_dist){
                answer+="L";
                left = number;
            }
            else{
                if(hand == "right"){
                    answer+="R";
                    right = number;
                }
                else {
                    answer+="L";
                    left = number;
                }
                
            }
        }
    }
    return answer;
}