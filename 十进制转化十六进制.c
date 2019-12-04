#include <stdio.h>
int main()
{
	int n,a[100],i;
	for(i = 0;i < 100;i++){
		a[i] = -1;
	}
	scanf("%d",&n);
	i = 0;
	while(n >= 16){
		a[i] = n % 16;
		n /= 16;
		i++;
	}
	a[i] = n;
	i = 99;
	while(i > -1){
		if(a[i] > 9){
			switch(a[i]){
				case 10:{
					printf("A");
					break;
				}
				case 11:{
					printf("B");
					break;
				}
				case 12:{
					printf("C");
					break;
				}
				case 13:{
					printf("D");
					break;
				}
				case 14:{
					printf("E");
					break;
				}
				case 15:{
					printf("F");
					break;
				}
			}
		}else if(a[i]!=-1){
			printf("%d",a[i]);
		}
		i--;
	}
	return 0;
}