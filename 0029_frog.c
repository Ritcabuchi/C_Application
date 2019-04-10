#include<stdio.h>
int main(){
	int i,x,y,jump=0;
	scanf("%d %d",&x,&y);
	for(i=x;i<=y;i+x){
		jump++;
		x=i;
	}
	printf("%d",jump);
}
