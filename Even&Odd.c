#include<stdio.h>
int main()
{
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	if(num%2==0){
		printf("Even Number");
	}
	else
	printf("Odd Number");
	return 0;
}
