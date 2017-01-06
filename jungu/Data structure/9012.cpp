#include <iostream>

#include <string>

using namespace std;

string par(string s) {

	int c = 0;

	for (int i = 0; i<s.size(); i++) {

		if (s[i] == '(') {
			c += 1;
		}
		else {
			c -= 1;
		}

		if (c < 0) {
			return "NO";
		}
	}

	if (c == 0) {
		return "YES";
	}
	else {
		return "NO";
	}

}

int main() {

	int n;
	cin >> n;

	while (n--) {

		string s;
		cin >> s;
		cout << par(s) << '\n';
	}
}