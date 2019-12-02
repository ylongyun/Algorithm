#include <stdio.h>
int main(){
	 long long int n,m = 0,i = 0;

	scanf("%I64d",&n);
	for(;i<=n;i++){
		m += i;
	}
	printf("%I64d",m);
	return 0;
}