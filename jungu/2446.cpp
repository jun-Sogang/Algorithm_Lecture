#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int n, i, j;
	cin >> n;

	for (i = 0; i <= n - 2; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		for (j = 1; j < (n - i) * 2; j++)
			printf("*");

		printf("\n");
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < n - i; j++)
			printf(" ");
		for (j = 1; j < i * 2; j++)
			printf("*");

		printf("\n");
	}

}