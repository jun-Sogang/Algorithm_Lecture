#include <cstdio>
#include <string>
#include <queue>
#include <iostream>

using namespace std;

int main() {

	int n;
	queue <int> q;
	cin >> n;

	while (n--) {
		string order;
		cin >> order;
		if (order == "push") {
			int n;
			cin >> n;
			q.push(n);
		}
		else if (order == "pop") {
			if (q.size() != 0) {
				printf("%d \n", q.front());
				q.pop();
			}
			else printf("-1 \n");
		}
		else if (order == "size")
			printf("%d \n", q.size());
		else if (order == "empty")
			printf("%d \n", q.empty());
		else if (order == "front") {
			if (q.size() != 0)
				printf("%d \n", q.front());
			else printf("-1 \n");
		}
		else if (order == "back") {
			if (q.size() == 0)
				printf("-1 \n");
			else printf("%d \n", q.back());
		}
	}

}