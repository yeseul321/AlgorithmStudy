#include <iostream>
using namespace std;
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n1, n2;
    cin >> n1 >> n2;
    cout << gcd(n1, n2) << "\n" << n1 * n2 / gcd(n1, n2);
    return 0;
}