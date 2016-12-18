#include <iostream>
#include <cstdio>
#include <string>

using namespace std;
int day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
string days[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };

int main()
{
	int m, d;
	int sum = 0;
	cin >> m >> d;
	for (int i = 0; i<m - 1; i++)
	{
		sum += day[i];
	}
	sum += d;
	printf("%s\n", days[sum % 7].c_str());

}
