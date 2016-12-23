#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b >> c;

	printf("%d \n", (a + b) % c);
	printf("%d \n", (a%c + b%c) % c);
	printf("%d \n", (a*b) % c);
	printf("%d \n", (a%c * b%c) % c);

}
