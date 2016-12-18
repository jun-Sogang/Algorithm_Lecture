#include <iostream>

using namespace std;

int main() {
	int n, value, max = 1, min = 1000000;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> value;
		if (value >= max)
			max = value;
		if (value <= min)
			min = value;
	}
	cout << min << " " << max << endl;
}