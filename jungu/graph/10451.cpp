#include <cstdio>
#include <iostream>

using namespace std;
int a[1001];
bool check[1001];

void dfs(int x) {

	if (check[x] == true) return;
	check[x] = true;
	dfs(a[x]);

}

int main() {

	int t;
	cin >> t;
	while (t--) {

		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			check[i] = false;
		}

		int ans = 0;

		for (int i = 1; i <= n; i++) {
			if (check[i] == false) {
				dfs(i);
				ans += 1;
			}
		}
		printf("%d\n", ans);
	}
}