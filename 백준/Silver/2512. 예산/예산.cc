#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
int low, high, result, sum;
int arr[10001];

int main() {
    cin >> N;
    for (auto i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cin >> M;
    high = *max_element(arr, arr + N);

    while (low <= high) {
        sum = 0;
        int mid = (low + high) / 2;
        for (auto i = 0; i < N; i++) {
            sum += min(arr[i], mid);
        }
        if (M >= sum) {
            result = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << result;
}
