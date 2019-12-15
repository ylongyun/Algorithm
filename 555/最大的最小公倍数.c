/*问题描述
已知一个正整数N，问从1~N中任选出三个数，他们的最小公倍数最大可以为多少。

输入格式
输入一个正整数N。

输出格式
输出一个整数，表示你找到的最小公倍数。
样例输入
9
样例输出
504
数据规模与约定
1 <= N <= 106。*/ 

#include <stdio.h>
#include <string.h>
int main(){
	long long int n;
	scanf("%I64d",&n);
	if(n % 2 == 1){
		printf("%I64d",n*(n-1)*(n-2));
	} else if(n % 3 == 0){
		printf("%I64d",(n-3)*(n-1)*(n-2));
	}else{
		printf("%I64d",n*(n-1)*(n-3));
	}
	return 0;
}

