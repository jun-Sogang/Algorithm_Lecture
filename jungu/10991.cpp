#include <iostream>

using namespace std;

int main() {
	int n, space, c = 1;
	cin >> n;
	space = n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < space; j++)
			cout << " ";
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
			if (i > 1 && c < i) {
				cout << " ";
				c++;
			}
		}
		cout << "\n";
		space--;
		c = 1;
	}
}