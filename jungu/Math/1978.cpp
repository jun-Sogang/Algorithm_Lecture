#include <iostream>

using namespace std;

bool prime(int n) {

	if (n < 2) {
		return false;
	}

	for (int i = 2; i*i <= n; i++) {

		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {

	int a;

	cin >> a;

	int cnt = 0;

	for (int i = 0; i<a; i++) {

		int num;
		cin >> num;
		if (prime(num)) {
			cnt += 1;
		}
	}
	printf("%d\n", cnt)
}