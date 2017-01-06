#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

string octal[8] = { "000","001","010","011","100","101","110","111" };

int main() {

	string s;
	int l = s.length();
	int cnt = 0;

	cin >> s;

	for (int i = 0; i < l; i++) {
		int n = s[i] - '0';

		if (cnt == 0 && n < 4) {
			if (n == 0) printf("0");
			else if (n == 1) printf("1");
			else if (n == 2) printf("10");
			else if (n == 3) printf("11");

			cnt++;
		}
		else {
			printf("%d", octal[n]);
			cnt++;
		}


	}
}
