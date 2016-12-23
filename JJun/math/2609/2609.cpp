#include <cstdio>
#include <algorithm>
using namespace std;
int gcd(int a, int b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a<b)
		swap(a,b);
	int M=gcd(a,b);
	int N=a*b/M;
	printf("%d\n%d\n",M,N);
}
