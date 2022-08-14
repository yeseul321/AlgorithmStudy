#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m, p, cnt;
vector<int> g[1001];
bool visit[1001];
bool visit2[1001];

void dfs(int n) {
    visit[n] = true;
    cout << n << ' ';
    sort(g[n].begin(), g[n].end());
    for (int next : g[n])
        if (!visit[next])
            dfs(next);
}

void bfs(int n) {
    queue<int> q;
    q.push(n);
    visit2[n] = true;
    cout << n << ' ';
    while (!q.empty()) {
        int pi = q.front(); q.pop();
        //sort(g[pi].begin(), g[pi].end());
        for (int next : g[pi]) {
            if (!visit2[next]) {
                visit2[next] = true;
                cout << next << ' ';
                q.push(next);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m >> p;
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(p);
    cout << '\n';
    bfs(p);

    return 0;
}