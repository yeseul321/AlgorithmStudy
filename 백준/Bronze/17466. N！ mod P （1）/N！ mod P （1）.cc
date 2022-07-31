#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long int n = 0, p = 0;
    long long int result = 1;
    cin >> n >> p;
    for(int i = 1; i <= n; i++){
        result *= i;
        result %= p;
    }
    cout << result;
}