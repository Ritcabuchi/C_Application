#include<stdio.h>
#include<conio.h>
int checkgrade(int s);
int main()
{
	int mid,final,grade,sum=0;
	char name[20];
	do{
		printf("Enter Your name:");
		scanf("%s",name);
		printf("Score your midterm:");
		scanf("%d",&mid);
		printf("Score your Final:");
		scanf("%d",&final);
		sum = mid + final;
		grade = checkgrade(sum);
		printf("%d\n",grade);
		switch(grade)
		{
		case 50:
			printf("You get D\n");
			break;
		case 55:
			printf("You get D+\n");
			break;
		case 60:
			printf("You get C\n");
			break;
		case 65:
			printf("You get C+\n");
			break;
		case 70:
			printf("Your get B\n");
			break;
		case 75:
			printf("Your get B+\n");
			break;
		case 80:
			printf("Your get A\n");
			break;
	
		default:
			printf("I hope you get better soon\n");
		}
	}while(1);
	getch();
	return 0;
}
int checkgrade(int s){
	if(s>=50&&s<55){
		s = 50;
		return s;
	}
	else if(s>=55&&s<60){
		s = 55;
		return s;
	}
	else if(s>=65&&s<70){
		s = 65;
		return s;
	}
	else if(s>=70&&s<75){
		s = 70;
		return s;
	}
	else if(s>=75&&s<80){
		s = 75;
		return s;
	}
	else if(s>=80&&s<85){
		s = 80;
		return s;
	}
	
	else
	return 0;
	
}
