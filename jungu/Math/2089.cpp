#include <cstdio>
#include <iostream>

using namespace std;

void trans(int n) {

	if (n == 0) {
		return;
	}
	if (n % 2 == 0) {
		trans(-(n / 2));
		printf("0");
	}
	else {

		if (n > 0) {
			trans(-(n / 2));
		}
		else {
			trans((-n + 1) / 2);
		}
		printf("1");
	}

}

int main() {

	int n;
	cin >> n;

	if (n == 0) {
		printf("0\n");
	}

	else {
		trans(n);
	}
}