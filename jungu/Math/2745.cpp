#include <iostream>
#include <string>

using namespace std;

int main() {

	int ans = 0;
	string n;
	int b;

	cin >> n >> b;

	for (int i = 0; i<n.size(); i++) {

		if ('0' <= n[i] && n[i] <= '9') {
			ans = ans * b + (n[i] - '0');
		}

		else {
			ans = ans * b + (n[i] - 'A' + 10);
		}

	}

	printf("%d\n", ans);
}