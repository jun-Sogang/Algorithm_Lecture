#include <cstdio>
#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {

	int n;
	deque <int> d;
	cin >> n;

	while (n--) {
		string order;
		cin >> order;
		if (order == "push_back") {
			int a;
			cin >> a;
			d.push_back(a);
		}
		else if (order == "push_front") {
			int a;
			cin >> a;
			d.push_front(a);
		}
		else if (order == "pop_back") {
			if (d.size() == 0)
				printf("-1 \n");
			else {
				printf("%d \n", d.back());
				d.pop_back();
			}
		}
		else if (order == "pop_front")
			if (d.size() == 0)
				printf("-1 \n");
			else {
				printf("%d\n", d.front());
				d.pop_front();
			}

		else if (order == "size") {
			printf("%d\n", d.size());
		}

		else if (order == "empty") {
			printf("%d\n", d.empty());
		}

		else if (order == "front") {
			if (d.empty()) {
				printf("-1 \n");
			}
			else {
				printf("%d \n", d.front());
			}
		}

		else if (order == "back") {

			if (d.empty()) {
				printf("-1 \n");
			}

			else {
				printf("%d \n", d.back());
			}
		}

	}
}
