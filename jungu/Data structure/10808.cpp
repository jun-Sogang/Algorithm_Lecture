#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {

	string s;
	int ans;
	cin >> s;

	for (int i = 'a'; i <= 'z'; i++) {
		ans = count(s.begin(), s.end(), i);
		printf("%d ", ans);

	}
	printf("\n");

}