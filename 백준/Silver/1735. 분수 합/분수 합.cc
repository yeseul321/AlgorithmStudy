#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a1 = 0, a2 = 0;
    int b1 = 0, b2 = 0;
    int bufA = 0, bufB = 0;
    int ret = 0;
    int final_ab = 0;

    cin >> a1 >> a2;
    cin >> b1 >> b2;

    bufA = a2;
    bufB = b2;

    if (!(a2 == b2)) {
        a2 = b2 = (a2 * b2 / gcd(a2, b2));
        a1 = a1 * (a2 / bufA);
        b1 = b1 * (b2 / bufB);
    }
    ret = gcd((a1 + b1), a2);
    final_ab = (a1 + b1) / ret;
    a2 = a2 / ret;
    cout << final_ab << ' ' << a2;
}