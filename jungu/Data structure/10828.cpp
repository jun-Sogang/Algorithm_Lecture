#include <iostream>
#include <stack>
#include <string>
#include <stdio.h>

using namespace std;

int main() {

	int n;
	cin >> n;
	stack<int> s;

	while (n--) {

		string order;
		cin >> order;

		if (order == "push") {
			int num;
			cin >> num;
			s.push(num);

		}
		else if (order == "top") {
			if (!s.empty())
				printf("%d\n", s.top());
			else printf("-1\n");
		}
		else if (order == "size") {
			printf("%d\n", s.size());
		}
		else if (order == "empty") {
			printf("%d\n", s.empty());
		}
		else if (order == "pop") {
			if (!s.empty()) {
				printf("%d\n", s.top());
				s.pop();
			}
			else printf("-1\n");
		}
	}
	return 0;
}
