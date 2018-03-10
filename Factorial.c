#include<stdio.h>
int main(){
	int num,s,fac=1,i;
	char st;
	do{
		printf("Calculate Factorial:");
		scanf("%d",&num);
		
		if(num==0){
		fac = 1;
		}
		else if(num<0){
		printf("Enter factorial again:");
		scanf("%d",&num);
		}
		for(i=1;i<=num;i++){
			fac = fac * i;
		}
		printf("Factorial of %d!:%d\n",num,fac);
		fac = 1;
	}while(1);
	
}
