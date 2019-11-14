/*
【问题描述】
给定数列 1, 1, 1, 3, 5, 9, 17, …，从第 4 项开始，每项都是前 3 项的和。求
第 20190324 项的最后 4 位数字。
*/
#include <stdio.h>
int main(){
	int a,b,c,i;
	a=b=c=i=1;
	for(;i<6730108;i++){
		a=(a+b+c)%10000;
		b=(a+b+c)%10000;
		c=(a+b+c)%10000;
	}
	printf("%d",c);
	return 0;
} 
