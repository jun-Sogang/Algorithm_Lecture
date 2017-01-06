#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
#include <iostream>
/*
1. 정점, 간선 받음
2. 그래프를 만들고
3. dfs 돌림
4. dfs가 한 사이클 돌아갈 때마다 연결요소 +1
*/

using namespace std;
vector<int> a[1001];
bool check[1001];


void dfs(int x) {

	check[x] = true;

	for (int i = 0; i<a[x].size(); i++) {
		int y = a[x][i];
		if (check[y] == false) {
			dfs(y);
		}
	}
}

int main() {

	int n, m;
	int comp = 0;
	cin >> n >> m;

	for (int i = 0; i<m; i++) {
		int u, v;
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	} // 그래프를 만듦

	for (int i = 1; i <= n; i++) {
		if (check[i] == false) {
			dfs(i);
			comp++;
		}
	}
	printf("%d\n", comp);
}