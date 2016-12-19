#include <stdio.h>
#include<iostream>

using namespace std;

int main() {
	int n, a, b, i;
	cin >> n;
	i = 0;
	while (n--) {
		i++;
		scanf_s("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}
}
