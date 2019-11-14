/*问题描述
　　给定一个长度为N的数列，A1, A2, ... AN，如果其中一段连续的子序列Ai, 
Ai+1, ... Aj(i <= j)之和是K的倍数，我
们就称这个区间[i, j]是K倍区间。


　　你能求出数列中总共有多少个K倍区间吗？
输入格式
　　第一行包含两个整数N和K。(1 <= N, K <= 100000)
　　以下N行每行包含一个整数Ai。(1 <= Ai <= 100000)
输出格式
　　输出一个整数，代表K倍区间的数目。
样例输入
5 2
1
2
3
4
5
样例输出
6
数据规模和约定
　　峰值内存消耗（含虚拟机） < 256M
　　CPU消耗 < 2000ms
 
*/ 
#include <stdio.h>
int main(){
	int n,k,i,r,t,l,a[100000],sum,count = 0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(i = 1; i <= n;i++){
		for(r = 0;r <= (n - i);r++){
			l = r;
			sum = 0;
			for(t = 0;t < i;t++){
				sum += a[l];
				l++;
			}
			if(sum % k == 0){
				count++;
			}
		}
	}
	printf("%d",count);
	return 0;
} 
