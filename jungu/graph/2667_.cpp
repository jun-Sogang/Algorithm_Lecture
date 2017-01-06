/*
1. 지도의 크기 N을 받음
2. 지도의 정보를 받음 - 행렬로
3. 지도 내 아파트에 대하여 이웃 관계 파악 - bfs 돌림
4. 이웃한 아파트는 같은 단지로 묶음
5. 각 단지 별로 몇 채의 집이 있는지 파악
6. 오름차순으로 정렬하고 출력
*/

#include <cstdio>
#include <algorithm>
#include <queue>
#include <iostream>

using namespace std;
int a[30][30];
int complex[30][30];
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
int n;
vector<int> ans;

void bfs(int x, int y, int cnt) {

	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	complex[x][y] = cnt;

	while (!q.empty()) {

		x = q.front().first;
		y = q.front().second;
		q.pop();

		for (int k = 0; k<4; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (0 <= nx && nx < n && 0 <= ny && ny < n) {
				if (a[nx][ny] == 1 && complex[nx][ny] == 0) {
					q.push(make_pair(nx, ny));
					complex[nx][ny] = cnt;
				}
			}
		}
	}
}

int main() {

	cin >> n;

	for (int i = 0; i<n; i++) {
		for (int j = 0; j<n; j++) {
			scanf_s("%1d", &a[i][j]);
		}
	}

	int cnt = 0;

	for (int i = 0; i<n; i++) {
		for (int j = 0; j<n; j++) {
			if (a[i][j] == 1 && complex[i][j] == 0) {
				bfs(i, j, ++cnt);
			}
		}
	}

	printf("%d\n", cnt);
	// 총 단지수 출력

	int test = cnt;
	while (test) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (a[i][j] == test)
					ans[test]++;
			}
		}
		test--;
	}

	sort(ans.begin(), ans.end());

	for (int i = 1; i <= cnt; i++) {
		printf("%d\n", ans[i]);
	}
}