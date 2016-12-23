#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

	int n;

	cin >> n;

	stack<int> s;

	while (n--) {

		string order;
		cin >> order;

		if (order == "push") {
			int a;
			cin >> a;
			s.push(a);

		}
		else if (order == "top") {
			printf("%d \n", s.top());
			if (s.size() == 0)
				printf("-1 \n");
		}



		else if (order == "size") {
			printf("%d \n", s.size());
		}

		else if (order == "empty") {
			printf("%d \n", s.empty());
		}

		else if (order == "pop") {
			if (s.size() == 0)
				printf("-1 \n");
			else {
				printf("%d \n", s.top());
				s.pop();
			}
		}
	}
}