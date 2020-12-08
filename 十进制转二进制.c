#include <stdio.h>
void fun(int n){
	
	if(n >= 2){
		fun(n / 2);
		printf("%d",n % 2);
	}
	else{
	printf("%d",n);
	}
	

}
int main(){
	int n,a[100] = {0},*i = 0;
	scanf("%d",&n);
	fun(n);
	return 0;
} 

