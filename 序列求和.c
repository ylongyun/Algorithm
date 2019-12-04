#include <stdio.h>
int main(){
	 long long int n;

	scanf("%I64d",&n);
	if(n % 2 == 0){
		n = (n + 1) * n / 2;
	} else{
		n = n  * (n - 1) / 2 + n;
	}
	printf("%I64d",n);
	return 0;
}
