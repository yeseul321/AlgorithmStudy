#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int test = 0, n = 0;
    int num = 0;
    long long sum = 0;
    vector<int> gcdvc;
    cin >> test;
    
    while (test--) {
        cin >> n;
        sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> num;
            gcdvc.push_back(num);
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++)

                sum+= gcd(gcdvc[i], gcdvc[j]);
        }
        cout << sum << "\n";
        gcdvc.clear();
    }
    return 0;
}