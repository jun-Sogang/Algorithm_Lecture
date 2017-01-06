#include <algorithm>
#include <iostream>

using namespace std;

int main() {

	int n, b, cnt = 0;

	cin >> n >> b;

	int r = 0;
	int ans[100];

	while (n > 0) {
		r = n%b;
		ans[cnt] = r;
		n /= b;
		cnt++;
	}

	printf("%d\n", cnt);

	for (int i = cnt - 1; i >= 0; i--) {
		if (ans[i] < 10)
			printf("%d", ans[i]);
		else printf("%c", ans[i] + 55);
	}

}