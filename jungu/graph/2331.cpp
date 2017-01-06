/*
1. A, P를 받음
2. 수열 D를 정의하고
3. A, P에 대해 D를 돌림
4. 계속 돌리면서 나오는 결과에 카운트
5. 이전에 만들었던 값을 만들면 거기서부터 반복임
6. 이전에 만들었던 값을 만들기 전까지가 값
*/

#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <iostream>

using namespace std;
int c[10000000];

int times(int x, int p) {

	int ans = 1;

	for (int i = 0; i<p; i++) {
		ans = ans * x;
	}
	return ans;
}

int next(int a, int p) {

	int ans = 0;

	while (a > 0) {
		ans += times(a % 10, p);
		a /= 10;
	}
	return ans;
}

int length(int a, int p, int cnt) {

	if (c[a] != 0) {
		return c[a] - 1;
	}
	c[a] = cnt;
	int b = next(a, p);
	return length(b, p, cnt + 1);
}

int main() {

	int a, p;
	cin >> a >> p;
	memset(c, 0, sizeof(c));
	printf("%d\n", length(a, p, 1));

}