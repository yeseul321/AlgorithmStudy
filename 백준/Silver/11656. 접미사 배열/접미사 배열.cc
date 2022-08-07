#include<iostream>
#include<algorithm>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string str;
	string buf[1000];
	cin >> str;
	for(int i = 0; i < str.size(); i++){
		buf[i] = str.substr(i, str.size()); //문자열의 i~l까지를 temp[i]에 복사 
	}
	sort(buf, buf + str.size()); //오름차순 
	for(int i = 0; i < str.size(); i++){
		cout << buf[i] << '\n';
	}
}