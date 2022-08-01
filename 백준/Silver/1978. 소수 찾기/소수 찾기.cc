#include <iostream>
#include <cmath>

using namespace std;

int num = 0, cnt = 0;
int prm = 0;

void isPrime(int n) {
    if (n == 1) {
        cnt--;
        return;
    }
    for (int j = 2; j <= sqrt(n); j++)
    {
        if (n % j == 0) {
            cnt--;
            break;
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> num;
    cnt = num;
    for (int i = 0; i < num; i++) {
        cin >> prm;
        isPrime(prm);
    }
    cout << cnt;

    return 0;
}