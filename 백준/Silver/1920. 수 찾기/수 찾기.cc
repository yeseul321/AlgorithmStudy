#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
int buf;
vector<int> nvec;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> buf;
        nvec.push_back(buf);
    }
    sort(nvec.begin(), nvec.end());

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> buf;
        if (binary_search(nvec.begin(), nvec.end(), buf)) cout << "1\n";
        else cout << "0\n";
    }

    return 0;
}