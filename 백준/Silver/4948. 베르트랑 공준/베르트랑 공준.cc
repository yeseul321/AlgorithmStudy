#include <iostream>
#include <cmath>

#define MAX 123456*2

using namespace std;

int num = 0;
int prm = 0;
bool arr[MAX + 1];


int main(void) {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> num;
    arr[0] = arr[1] = true;
    for (int i = 2; i * i <= MAX; i++) {
        if (arr[i])continue;
        for (int j = i * i; j <= MAX; j += i) {
            arr[j] = true;
        }
    }
    while (num != 0) {
        for (int i = num + 1; i <= 2 * num; i++)
            if (!arr[i]) {
                prm++;
            }
        cout << prm << "\n";
        prm = 0;
        cin >> num;
    }
    
}