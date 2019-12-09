#include <stdio.h>
void A(int n){
	if(n >= 1){
		A(n-1);
		printf("%c",'A'+n-1);
		A(n-1);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	A(n);
	return 0;
} 
