#include <iostream>
#include <string>

using namespace std;
int prime[1000000]; // 에라토스테네스의 체에서 걸러진 소수 배열
int num = 0;
bool c[1000001];

int main() {
	// 에라토스테네스의 체
	c[0] = c[1] = true;
	for (int i = 2; i <= 1000000; i++) {
		if (c[i] == false) {
			prime[num] = i;
			num++;
			for (int j = i + i; j <= 1000000; j += i) {
				c[j] = true;
			}
		}
	}

	while (1) {
		int n; // 입력받는 짝수
		cin >> n;

		if (n == 0) {
			break;
		}

		for (int i = 1; i < num; i++) {
			if (c[n - prime[i]] == false) {
				printf("%d = %d + %d\n", n, prime[i], n - prime[i]);
				break;
			}
		}
	}

}