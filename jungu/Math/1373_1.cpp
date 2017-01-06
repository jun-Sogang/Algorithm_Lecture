#include <iostream>
#include <stack>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int a=0;
	stack<int> b;
	cin >> a;

	while (a != 0) {
		int k = a % 1000;
		if (k == 0) b.push(k);
		else if (k == 1)
			b.push(k);

		else if (k == 10){
			k = 2;
			b.push(k);
		}
		else if (k == 11) {
			k = 3;
			b.push(k);
		}	
		else if (k == 100) {
			k = 4;
			b.push(k);
		}
		else if (k == 101) {
			k = 5;
			b.push(k);
		}
		else if (k == 110) {
			k = 6;
			b.push(k);
		}
		else if (k == 111) {
			k = 7;
			b.push(k);
		}

		a /= 1000;
	}

	if (b.empty())
		cout << 0;

	else {
		for (int i = 0; i < b.size; i++) {
			cout << b.top();
			b.pop();
		}
	}

}