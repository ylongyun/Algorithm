#include <stdio.h>
int main(){
	int a[10000];
	int i,j,k,l,n;
	scanf("%d",&n);
	for(i = 1;i < 10000;i++){
		a[i] = -1;
	}
	a[0] = 1;
	for(i = 2;i <= n;i++){
		for(j = 0;a[j] != -1;j++){
			a[j] *= i;
		}
		for(j = 0;a[j] != -1;j++){
			k = a[j] / 10;
			a[j] %= 10;
			l = 1;
			while(k > 0){
				if(a[l+j] == -1){
					a[j+l] = (k % 10);
				}else{
					a[j+l] += (k % 10);
				}
				k /= 10;
				l++; 
			}
		}
	}
	for(i = 9999;i > -1;i--){
		if(a[i] != -1){
			printf("%d",a[i]);
		}
	}
	return 0;
	
} 
