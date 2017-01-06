/*
1. 상자의 가로 세로 받음 (n,m)
2. 토마토 정보 받음 - 행렬로
3. 익은 토마토 옆의 안익은 토마토는 하루 뒤 익음
4. 토마토가 없으면 효과 없음 // 익은 토마토는 영향 X
5. 상자 내 모든 토마토가 익을 때까지 걸린 일 수 받음
6. 출력
7. 모든 토마토가 익지 못하는 경우 -1 출력
*/


#include <cstdio>
#include <queue>
#include <iostream>

using namespace std;
int a[1000][1000];
int grow[1000][1000];
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
int n, m;

void bfs(int x, int y) {

	queue<pair<int, int>> q;
	q.push(make_pair(x, y));

	while (!q.empty()) {

		x = q.front().first;
		y = q.front().second;
		q.pop();

		for (int k = 0; k<4; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
				if (a[nx][ny] == 0 && grow[nx][ny] == -1) {
					grow[nx][ny] = grow[x][y] + 1;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}

}

int main() {

	cin >> n >> m;

	for (int i = 0; i<n; i++) {
		for (int j = 0; j<m; j++) {
			scanf_s("%d", &a[i][j]);
			grow[i][j] = -1;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 1) {
				grow[i][j] = 0;
				bfs(i, j);
			}
		}
	}

	int ans = 0;

	for (int i = 0; i<n; i++) {
		for (int j = 0; j<m; j++) {
			if (ans < grow[i][j]) {
				ans = grow[i][j];
			}
		}
	}

	for (int i = 0; i<n; i++) {
		for (int j = 0; j<m; j++) {
			if (a[i][j] == 0 && grow[i][j] == -1) {
				ans = -1;
			}
		}
	}
	printf("%d\n", ans);
}