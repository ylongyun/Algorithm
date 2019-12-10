#include <stdio.h>
int main(){
	int a[101] = {0},b[101] = {0},i,j,n,m,t;
	char ch;
	i = 0;
	while((ch = getchar()) !='\n'){
		a[i] = ch - '0';
		i++;
	}
	j = 0;
	while((ch = getchar()) !='\n'){
		b[j] = ch - '0';
		j++;
	}
	for(n = 0;n < (i/2);n++){
		t = a[i-n-1];
		a[i-n-1] = a[n];
		a[n]= t;
	} 
	for(n = 0;n < (j/2);n++){
		t = b[j-n-1];
		b[j-n-1] = b[n];
		b[n]= t;
	} 
	
	if(i > j){
		m = j;
		for(j = 0;j < m;j++){
			a[j] = a[j] + b[j];
		}
		for(j = 0;j < i;j++){
			if(a[j] > 9){
				a[j+1]++;
				a[j] = a[j] % 10;
			}
		}
		if(a[i] > 0){
			printf("%d",a[i]);
		}
		for(j = i-1;j >= 0;j--){
			printf("%d",a[j]);
		}
	}else{
		m = i;
		for(i = 0;i < m;i++){
			b[i] = b[i] + a[i];
		}
		for(i = 0;i < j;i++){
			if(b[i] > 9){
				b[i+1]++;
				b[i] = b[i] % 10;
			}
		}
		if(b[i] > 0){
			printf("%d",b[i]);
		}
		for(i = j-1;i >= 0;i--){
			printf("%d",b[i]);
		}
	}
	
	return 0;
	
} 

