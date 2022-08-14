#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m, cnt;
vector<int> g[101];
bool visit[101];

void dfs(int n) {
    visit[n] = true;
    for (int next : g[n])
        if (!visit[next]) {
            cnt++;
            dfs(next);
        }
}

void bfs(int n) {
    queue<int> q;
    q.push(n);
    visit[n] = true;
    while (!q.empty()) {
        int pi = q.front(); q.pop();
        for (int next : g[pi]) {
            if (!visit[next]) {
                cnt++;
                visit[next] = true;
                q.push(next);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    //dfs(1);
    bfs(1);

    cout << cnt;

    return 0;
}