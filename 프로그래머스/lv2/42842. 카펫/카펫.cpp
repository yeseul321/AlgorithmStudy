#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {

    int w = brown / 2 - 1;
    int h = 3;

    while(w >= h){
        if(w * h == (brown + yellow)) break;

        w--;
        h++;
    }

    return vector<int>{w, h};
}