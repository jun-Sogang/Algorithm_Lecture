#include <iostream>

using namespace std;

void conv(int num, int base) {

	if (num == 0) return;
	conv(num / base, base);
	printf("%d ", num%base);
}

int main() {

	int a, b;
	int n;

	cin >> a >> b;
	cin >> n;

	int ans = 0;

	for (int i = 1; i <= n; i++) {

		int c;
		cin >> c;
		ans = ans * a + c;
	}
	conv(ans, b);
}