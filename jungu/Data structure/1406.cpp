#include <cstdio>
#include <cstring>
#include <stack>

using namespace std;

char a[600000];

int main() {

	scanf("%s", a);

	stack<char> left, right;

	int n = strlen(a);

	for (int i = 0; i<n; i++) {

		left.push(a[i]);

	}

	int m;

	scanf("%d", &m);

	while (m--) {

		char order;

		scanf("%c", &order);

		if (order == 'L') {

			if (left.size() != 0) {
				right.push(left.top());
				left.pop();
			}

		}
		else if (order == 'D') {

			if (right.size() != 0) {
				left.push(right.top());
				right.pop();
			}
		}

		else if (order == 'B') {
			if (left.size() != 0) {
				left.pop();
			}

		}
		else if (order == 'P') {
			char c;
			scanf(" %c", &c);
			left.push(c);
		}
	}


	printf("\n");

	return 0;

}