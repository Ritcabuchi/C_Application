#include<stdio.h>
int main()
{
	int Num,numb[20],i,max,min;
	printf("Calculate Basic Math\n");
	printf("---------------------\n");
	printf("Number of digits:");
	scanf("%d",&Num);
	for(i=0;i<Num;i++)
	{
		printf("Enter num[%d]:",i+1);
		scanf("%d",&numb[i]);
	}
		max = numb[0];
		min = numb[0];
	for(i=0;i<Num;i++)
	{
		if(max<numb[i]){
			max = numb[i];
		}
		if(min>numb[i]){
			min = numb[i];
		}
	}
		printf("Max of Number: %d\n",max);
		printf("Min of Number: %d",min);
}
