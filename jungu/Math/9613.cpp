#include <cstdio>
#include <iostream>

using namespace std;

int gcd(int a, int b) {

	if (b == 0) return a;

	else return gcd(b, a%b);

}

int main() {

	int T;

	cin >> T;

	while (T--) {

		int num[111];
		int n;
		int sum = 0;

		cin >> n;

		for (int i = 0; i < n; i++)
			cin >> num[i];

		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++) {
				sum += gcd(num[i], num[j]);
			}

		printf("%d\n", sum);
	}
}