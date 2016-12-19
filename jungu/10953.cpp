#include <stdio.h>
#include<iostream>

using namespace std;

int main() {
	int n, a, b;
	cin >> n;
	while (n--) {
		scanf_s("%d,%d", &a, &b);
		printf("%d\n", a + b);
	}
}
