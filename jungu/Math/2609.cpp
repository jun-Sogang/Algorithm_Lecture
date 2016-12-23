#include <iostream>
#include <stdio.h>

using namespace std;

int gcd(int a, int b) {

	if (b == 0) return a;

	else return gcd(b, a%b);

}

int main() {

	int c, d;

	cin >> c >> d;

	int g = gcd(c, d);

	printf("%d\n%d", g, (c*d) / g);


}