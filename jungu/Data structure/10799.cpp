#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int main() {

	string a;
	cin >> a;
	int n = a.size();

	vector <int> s;

	int ans = 0;

	for (int i = 0; i<n; i++) {

		if (a[i] == '(') {
			s.push_back(i);
		}
		else {
			if (a[i] != a[i - 1]) {
				s.pop_back();
				ans += s.size();
			}
			else {
				s.pop_back();
				ans += 1;
			}
		}
		//cout << s.size() << "\n";
	}
	cout << ans << '\n';
}