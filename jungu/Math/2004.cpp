#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	long long t = 0, f = 0;
	long long n, m;
	int i;
	cin >> n >> m;

	for (i = 2; i <= n; i *= 2) {
		t += n / i;
	}
	for (i = 2; i <= m; i *= 2) {
		t -= m / i;
	}
	for (i = 2; i <= n-m; i *= 2) {
		t -= (n - m) / i;
	}
	for (i = 5; i <= n; i *= 5) {
		f += n / i;
	}	
	for (i = 5; i <= m; i *= 5) {
		f -= m / i;
	}	
	for (i = 5; i <= n-m; i *= 5) {
		f -= (n - m) / i;
	}

	printf("%d\n", min(t, f));
}