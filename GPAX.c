#include<stdio.h>
#include<conio.h>
int change(char grade);
int main()
{
	int i;
	float grade[4],sumgrade=0;
	int credit[4],sumcredit=0;
	//subject your study;
	printf("Enter grade\n");
	printf("GENERAL PHYSICS:");
	scanf("%f",&grade[0]);
	printf("PREPARATORY FOUND.ENG:");
	scanf("%f",&grade[1]);
	printf("BASIC MATHEMATICS:");
	scanf("%f",&grade[2]);
	printf("INTRO TO COMP PROGRAM:");
	scanf("%f",&grade[3]);
	//credit;
	printf("Enter Credits\n");
	printf("GENERAL PHYSICS:");
	scanf("%d",&credit[0]);
	printf("PREPARATORY FOUND.ENG:");
	scanf("%d",&credit[1]);
	printf("BASIC MATHEMATICS:");
	scanf("%d",&credit[2]);
	printf("INTRO TO COMP PROGRAM:");
	scanf("%d",&credit[3]);
	printf("Calculate GPAX\n");
	
	for(i=0;i<4;i++){
		sumcredit += credit[i];
		sumgrade += credit[i]*grade[i]; 
	}
	printf("GPAX: %.2f",sumgrade/sumcredit);
	getch();
	return 0;
}

