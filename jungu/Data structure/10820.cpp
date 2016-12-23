#include <iostream>
#include <string>

using namespace std;

int main() {

	string s;

	while (getline(cin, s)) {

		int a = 0;
		int A = 0;
		int number = 0;
		int space = 0;

		for (int i = 0; i < s.size(); i++) {

			if (s[i] >= 'a' && s[i] <= 'z') {
				a += 1;
			}

			else if (s[i] >= 'A' && s[i] <= 'Z') {
				A += 1;
			}

			else if (s[i] >= '0' && s[i] <= '9') {
				number += 1;
			}

			else if (s[i] == ' ') {
				space += 1;
			}
		}

		printf("%d %d %d %d\n", a, A, number, space);

	}
}