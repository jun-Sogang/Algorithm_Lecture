#include<stdio.h>

int main() {

	int n, a, sum;
	sum = 0;
	scanf_s("%d", &n);
	while (n--) {
		scanf_s("%1d", &a);
		sum += a;
	}
	printf("%d", sum);
}
