#include <iostream>

using namespace std;
int n, m, a, b, cnt, ans = 0;
int graph[501][501];

int main(void)

{
	cin >> n >> m;
	fill(&graph[0][0], &graph[100][101], 1e9);
	while (m--) {
		cin >> a >> b;
		graph[a][b] = 1;
	}

	for (int i = 1; i <= n; i++) graph[i][i] = 0;

	for (int k = 1; k <= n; k++)
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++) {
				if (graph[i][k] == 1 && graph[k][j] == 1) graph[i][j] = 1;
			}

	for (int i = 1; i <= n; i++) {
		cnt = 0;
		for (int j = 1; j <= n; j++) {
			if (graph[i][j] == 1 || graph[j][i] == 1) cnt++;
		}
		if (cnt == (n - 1)) ans++;
	}
	cout << ans; 
	return 0;
}