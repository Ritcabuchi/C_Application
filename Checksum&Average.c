#include<stdio.h>
int main()
{
	int Num,numb[20],i,sum = 0;
	float avr = 0.0;
	printf("Calculate Basic Math\n");
	printf("---------------------\n");
	printf("Number of digits:");
	scanf("%d",&Num);
	for(i=0;i<Num;i++)
	{
		printf("Enter num[%d]:",i+1);
		scanf("%d",&numb[i]);
	}
	for(i=0;i<Num;i++)
	{
		sum += numb[i];
	}
	
		avr = (float)sum/Num;
		printf("Sum of Number: %d\n",sum);
		printf("Average of Number: %.2f",avr);
}

