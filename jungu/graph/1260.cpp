#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
#include <iostream>
/*
1. 정점, 간선, 시작점 받음
2. 그래프를 만들고
3. dfs, bfs 돌림
*/

using namespace std;
vector<int> a[1001];
bool check[1001];

void dfs(int x) {

	check[x] = true;
	printf("%d ", x);

	for (int i = 0; i<a[x].size(); i++) {
		int y = a[x][i];
		if (check[y] == false) {
			dfs(y);
		}
	}
}

void bfs(int start) {

	queue<int> q;
	memset(check, false, sizeof(check));
	check[start] = true;
	q.push(start);

	while (!q.empty()) {

		int x = q.front();
		q.pop();
		printf("%d ", x);

		for (int i = 0; i<a[x].size(); i++) {
			int y = a[x][i];
			if (check[y] == false) {
				check[y] = true;
				q.push(y);
			}
		}
	}
}

int main() {

	int n, m, start;
	cin >> n >> m >> start;

	for (int i = 0; i<m; i++) {
		int u, v;
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	} // 그래프를 만듦

	for (int i = 1; i <= n; i++) {
		sort(a[i].begin(), a[i].end());
	} // 정점 번호가 작은 것을 먼저 방문한다는 조건 때문에 써야함

	dfs(start);
	printf(" ");
	bfs(start);
	printf(" ");

}