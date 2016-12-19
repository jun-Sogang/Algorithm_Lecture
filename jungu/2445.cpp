#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n, i, j;
	cin >> n;

	for (i = 1; i < n; i++) {

		for (j = 0; j < n; j++) {
			if (j < i)
				printf("*");
			else
				printf(" ");
		}

		for (j = 0; j < n; j++) {
			if (j < n - i)
				cout << " ";
			else
				cout << "*";
		}

		cout << "\n";
	}

	for (i = 0; i <= n; i++) {

		for (j = 0; j < n; j++) {
			if (j < n - i)
				printf("*");
			else
				printf(" ");
		}

		for (j = 1; j < n + 1; j++) {
			if (j <= i)
				cout << " ";
			else cout << "*";
		}

		cout << "\n";
	}
}