#include<stdio.h>
int main(){
	int n,i,j,l,r,off,half,row,col;
	scanf("%d",&n);
    half = n%2==0 ? n/2-1:n/2;
    row = n;
    col =  n%2==0 ? n-1:n;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			off = i > half ?(row-1)-i : i;
			l = half - off;
			r = half + off;
			if(j==l || j==r){
				printf("*");
			}
			else
			printf("_");
		}
		printf("\n");
	}
    
	
}
