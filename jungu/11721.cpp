#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main() {

	string str;
	cin >> str;
	for (int i = 0; i<str.length(); i++) {
		printf("%c", str[i]);
		if (i % 10 == 9) {
			cout << endl;
		}
	}
}
