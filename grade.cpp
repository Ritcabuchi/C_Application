#include<stdio.h>
int main()
{
	int a,b,c,sum=0;	
	scanf("%d%d%d",&a,&b,&c);
	sum = a + b + c;
	if(sum<=100&&sum>=80){
		printf("A");
	}
	else if(sum<=79&&sum>=75){
		printf("B+");
	}
	else if(sum<=74&&sum>=70){
		printf("B");
	}
	else if(sum<=69&&sum>=65){
		printf("C+");
	}
	else if(sum<=64&&sum>=60){
		printf("C");
	}
	else if(sum<=59&&sum>=55){
		printf("D+");
	}
	else if(sum<=54&&sum>=50){
		printf("D");
	}
	else if(sum<=49&&sum>=0){
		printf("F");
	}
	return 0;
}

