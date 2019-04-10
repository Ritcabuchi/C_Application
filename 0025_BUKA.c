#include<stdio.h>
int main()
{
	int num_A,num_B,answer;
	char mul = '*',plus = '+',operation;
	scanf("%d %c %d",&num_A,&operation,&num_B);
	if(operation==mul){
		answer = num_A * num_B;
		printf("%d",answer);
	}
	else if(operation==plus){
		answer = num_A + num_B;
		printf("%d",answer);
	}
	return 0;

}
