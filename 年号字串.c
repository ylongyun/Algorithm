/*小明用字母 A 对应数字 1，B 对应 2，以此类推，用 Z 对应 26。对于 27
以上的数字，小明用两位或更长位的字符串来对应，例如 AA 对应 27，AB 对
应 28，AZ 对应 52，LQ 对应 329。
请问 2019 对应的字符串是什么？*/
#include <stdio.h>
int main(){
	int n = 0,b = 0,i = 0;
	char a[5] = {'\0'};
	scanf("%d",&n);
	if(n % 26 != 0){
		while(n > 26){
		b = n % 26;
		a[i] = '@'+b;
		n /= 26;
		i++;
		}
		a[i] = '@'+n;
		for(;i >= 0;i--){
		printf("%c",a[i]);
		}
	}
	return 0;
} 
