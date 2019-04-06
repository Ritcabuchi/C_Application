#include<stdio.h>
int main(){
	int i,number,n[9];
	
	scanf("%d",&number);
	for(i=0;i<number;i++){
		scanf("%d",&n[i]);
	}
	for(i=0;i<number;i++){
		if(n[i]%2==0){
			printf("T\n");
		}
		else
		{
			printf("F\n");
		}
	}
	return 0;
}
