#include <bits/stdc++.h>
int **map;
char a[200]={'\0'},b[4] = {'D','L','R','U'},A[200]={'\0'};
int nx[4] = {1,0,0,-1},ny[4]={0,-1,1,0},t=0,m=0,N = 99999;
int cheack(int x,int y){
	if(x>-1&&x<t&&y<m&&y>-1){
		if(map[x][y] == 0){
			return 1;
		}		
	}
	return 0;
}
void out(int n){
	
	if(n < N){
		memset(A,'\0',200*sizeof(char));
		int i = 0;
		N = n;
		for(;i<n;i++){
			A[i] = a[i];
		}
	}
}
void play(int x,int y,int n){
	map[x][y] = 1;
	if(x==t-1&&y==m-1){
		out(n);	
	}else{
		int i = 0,newx=0,newy=0;
		for(i=0;i<4;i++){
			newx = nx[i] + x;
			newy = ny[i] + y;
			if(cheack(newx,newy)){
				a[n] = b[i];
				play(newx,newy,n+1);				
			a[n] = '\0';	
			}
		}
	}
	map[x][y] = 0;
}
int main(){
	 
	int i = 0,j = 0;
	scanf("%d%d",&t,&m);
	map = (int**)malloc(sizeof(int*) * t);
	for(i=0;i<t;i++){
		map[i] = (int*)malloc(sizeof(int) * m);	
	}
	for(i=0;i<t;i++){
		for(j=0;j<m;j++){
			scanf("%1d",&map[i][j]);
		}	
	}
	play(0,0,0);
	printf("%d\n",N);
	for(j=0;j < N;j++){
		printf("%c",A[j]);
	}
	return 0;
} 
