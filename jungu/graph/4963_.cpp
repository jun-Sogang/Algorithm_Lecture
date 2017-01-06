/*
1. 지도의 너비와 높이 받음
2. 지도의 정보를 받음 - 행렬로
3. 지도 내 점에 대하여 이웃 관계 파악 - bfs 돌림(상하좌우 대각선까지)
4. 이웃한 점은 같은 섬으로 묶음
5. 총 몇개의 섬이 있는지 파악
6. 출력
*/

#include <cstdio>
#include <algorithm>
#include <queue>
#include <iostream>

using namespace std;
int a[100][100];
int complex[100][100];
int dx[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
int dy[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
int w, h;

void bfs(int x, int y, int cnt) {

	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	complex[x][y] = cnt;

	while (!q.empty()) {

		x = q.front().first;
		y = q.front().second;
		q.pop();

		for (int k = 0; k<8; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (0 <= nx && nx < w && 0 <= ny && ny < h) {
				if (a[nx][ny] == 1 && complex[nx][ny] == 0) {
					q.push(make_pair(nx, ny));
					complex[nx][ny] = cnt;
				}
			}
		}
	}
}

int main() {

	while (1) {
		memset(complex, 0, sizeof(complex));
		cin >> w >> h;

		if (w == 0 && h == 0) break;

		for (int i = 0; i<w; i++) {
			for (int j = 0; j<h; j++) {
				scanf_s("%1d", &a[i][j]);

			}
		}
		int cnt = 0;

		for (int i = 0; i<w; i++) {
			for (int j = 0; j<h; j++) {
				if (a[i][j] == 1 && complex[i][j] == 0) {
					bfs(i, j, ++cnt);
				}
			}
		}
		printf("%d\n", cnt);
	}
}