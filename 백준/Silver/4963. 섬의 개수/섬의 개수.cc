#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int g[51][51];
int n, m, cnt, di[8] = { 1,1,0,-1,-1,-1,0,1 }, dj[8] = { 0,1,1,1,0,-1,-1,-1 };
bool visit[51][51];
queue<pair<int, int>> q;

void dfs(int y, int x) {
    for (int i = 0; i < 8; i++) {
        int nextX = x + di[i];
        int nextY = y + dj[i];
        if (nextX < 0 || nextY < 0 || nextX >= n || nextY >= m)continue; //범위를 벗어나면 무시
        if (!visit[nextY][nextX] && g[nextY][nextX]) { //이동할 좌표가 방문하지 않은 땅이면 재귀호출
            visit[nextY][nextX] = 1;
            dfs(nextY, nextX);
        }
    }
}

void bfs() {
    while (!q.empty()) {
        int y = q.front().first;
        int x = q.front().second; q.pop();
        for (int i = 0; i < 8; i++) {
            int ni = x + di[i];
            int nj = y + dj[i];
            if (ni >= 0 && nj >= 0 && ni < n && nj < m) {
                if (!visit[nj][ni] && g[nj][ni] == 1) {
                    visit[nj][ni] = true;
                    q.push({ nj, ni });
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    while (1) {
        cnt = 0;
        cin >> n >> m;
        if (!n && !m) break;
        memset(visit, 0, sizeof(visit));
        for (int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) cin >> g[i][j];
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!visit[i][j] && g[i][j] == 1) {
                    q.push({ i, j });
                    visit[i][j] = true;
                    dfs(i,j);
                    //bfs();
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}