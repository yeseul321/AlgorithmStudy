#include <iostream>
#include <string>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str = "", str2 = "";
    string buf = "";
    int i = 0;
    int cnt = 0;
    getline(cin, str);
    getline(cin, str2);
    while ((str.length() - i) >= str2.length()) {
        buf = str.substr(i, str2.length());
        if (buf == str2) {
            i += str2.length();
            cnt++;
        }
        else i++;
    }
    cout << cnt;
}