#include <iostream>
#include <map>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n = 0;
    int num = 0;
    cin >> n;

    while (n--) {
        map<int, int> mp;
        cin >> num;
        for (int i = 2; i <= num; i++) {
            while (num % i == 0) {
                mp[i]++;
                num /= i;
            }
        }
        for (auto a : mp) {
            cout << a.first << ' ' << a.second << '\n';
        }
    }
}