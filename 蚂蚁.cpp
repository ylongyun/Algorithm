#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int L = 0,n=0,T=0,*a,in = 0,*c;
char *b,ch;
int cheack(int j){
	int h,e;
	h = j-2;
	e = j+4;
	if(h<0){
		h = 0;
	}
	if(e>L-1){
		e = L-1;
	}
	for(;h<=e;h++){
		if(a[h]&&(b[j]!=b[h]))
	}
}
int main(){
	int i = 0,j =0;
	scanf("%d%d%d",&L,&T,&n);
	a = (int*)malloc(sizeof(int) * L);
	c = (int*)malloc(sizeof(int) * L);
	memset(c,0,L*sizeof(int));
	memset(a,0,L*sizeof(int));
	b = (char*)malloc(sizeof(char)*L);
	memset(a,'\0',L*sizeof(char));
	for(;i<n;i++){
		scanf("%d %c",&in,&ch);
		a[i] = 1;
		b[i] = ch;
	}
	for(i=0;i<T;i++){
		for(j=0;j<L;j++){
			if(a[j]&&(!c[j])){
				if(cheack(j)){
					
				}
			}
		}
		memset(c,0,L*sizeof(int));
	}
	
	return 0;
}
