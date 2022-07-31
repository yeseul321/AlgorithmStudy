#include <iostream>

using namespace std;

int main(void) {
    int n = 0;
    cin >> n;

    if (n == 1) return 0;

    else {
        for (int i = 2; i <= n; i++) {
            while (n % i == 0) {
                cout << i << '\n';
                n /= i;
            }
        }
    }
}