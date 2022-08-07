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
		buf[i] = str.substr(i, str.size());
	}
	sort(buf, buf + str.size());
	for(int i = 0; i < str.size(); i++){
		cout << buf[i] << '\n';
	}
}