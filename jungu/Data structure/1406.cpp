#include <iostream>
#include <cstdio>
#include <cstring>
#include <stack>

using namespace std;
char a[600000];

int main() {

	cin >> a;
	stack<char> left, right; // 커서 왼쪽 오른쪽
	
	int n = strlen(a);

	for (int i = 0; i<n; i++) {
		left.push(a[i]); // 커서의 왼쪽에 문자를 전부 넣음
	}

	int m; //명령어 개수
	cin >> m;

	while (m--) {

		char order;
		cin >> order;

		if (order == 'L') {
			if (!left.empty()) { //커서의 왼쪽에 문자가 있는 경우
				right.push(left.top());
				left.pop();
			}
			// 커서의 왼쪽에 문자가 없는 경우 무시되니 else 필요 없음
		}
		else if (order == 'D') {

			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}

		else if (order == 'B') {
			if (!left.empty()) {
				left.pop();
			}

		}
		else if (order == 'P') {
			char c;
			scanf(" %c", &c);
			left.push(c);
		}
	}
	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()) {
		printf("%c", right.top());
		right.pop();
	}
	printf("\n");

}