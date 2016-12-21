#include <cstdio>
#include <stack>
#include <string>
#include <iostream>
using namespace std;

int main(){
	int n;
	stack < int > s;
	scanf("%d",&n);
	while(n--){
		string a;
		cin >> a;
		if(a=="push"){
			int temp;
			scanf("%d",&temp);
			s.push(temp);
		}
		else if(a=="pop"){
			if(s.size()==0){
				printf("-1\n");
			}
			else{
				printf("%d\n",s.top());
				s.pop();
			}
		}
		else if(a=="size"){
			printf("%d\n",s.size());
		}
		else if(a=="empty"){
			if(s.empty()){
				printf("1\n");
			}
			else
				printf("0\n");
		}
		else if(a=="top"){
			if(s.size()==0){
				printf("-1\n");
			}
			else
				printf("%d\n",s.top());
		}
	}

}
