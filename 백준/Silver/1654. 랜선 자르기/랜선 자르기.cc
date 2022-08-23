#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, K;
long long low, high, result = 1, cnt;
int arr[10001];

int main() {
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    low = 1;
    high = *max_element(arr, arr + N);

    while (low <= high) {
        cnt = 0;
        long long mid = (low + high) / 2;
        for (auto i = 0; i < N; i++) {
            cnt += arr[i]/mid;
        }
        if (cnt >= K) {
            if (result < mid) result = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << result;
}