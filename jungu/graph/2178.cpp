/*
1. 배열로 표현되는 미로를 받음.
2. 출발은 (1,1) 도착은 (M,N)
3. 출발점에서 M,N까지 가는 경로를 bfs로 돌림
4. 한 번 들린 곳은 체크
5. bfs 한번 돌 때마다 카운트+1
6. 카운트 변수는 초기값 1
*/

#include <cstdio>
#include <queue>

using namespace std;

int n, m;
int a[100][100];
bool c[100][100];
int cnt[100][100];
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };


int main() {

	cin >> n >> m;
	c[0][0] = true;
	cnt[0][0] = 1;

	for (int i = 0; i<n; i++) {
		for (int j = 0; j<m; j++) {
			scanf("%1d", &a[i][j]);
		}
	}

	queue<pair<int, int>> q;
	q.push(make_pair(0, 0));

	while (!q.empty()) {

		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int k = 0; k<4; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
				if (c[nx][ny] == false && a[nx][ny] == 1) {
					q.push(make_pair(nx, ny));
					cnt[nx][ny] = cnt[x][y] + 1;
					c[nx][ny] = true;
				}
			}
		}
	}

	printf("%d\n", cnt[n][m]);

}