#include<stdio.h>
#include<conio.h>
#include<string.h>
char searchVariable(char va[]);
char searchOperator(char va[]);
void plus(char va[]);
void minus(char va[]);
void divide(char va[]);
void multiplication(char va[]);
int main()
{
	char Variable[30];
	int num;
	printf("Enter Variable Number(max 3 number):");
	//enter 1 2 3;
	scanf("%d",&num);
	switch(num){
		case 1:
			printf("Start Calculate Variable(x+2=5):");
			scanf("%s",Variable);
			searchVariable(Variable);
			searchOperator(Variable);
			break;
		case 2:
			printf("Start Calculate Variable(x+y+2=5):");
			scanf("%s",Variable);
			searchVariable(Variable);
			searchOperator(Variable);
			break;
		case 3:
			printf("Start Calculate Variable(x+y+x+2=10):");
			scanf("%s",Variable);
			searchVariable(Variable);
			searchOperator(Variable);
			break;
			default:
				printf("Your number not correct");
	}
	getch();
	return 0;
}
char searchVariable(char va[]){
	int i; 
	for(i=0;i<strlen(va);i++){
		if(va[i]==x){
			printf("Variable X\n");
		}
		if(va[i]==y){
			printf("Varible Y\n");
		}
		if(va[i]==z){
			printf("Variable Z\n");
		}
	}
}
char searchOperator(char va[]){
	int i;
	for(i=0;i<stlen(va);i++){
		if(va[i]==+){
			plus(va);
		}
		if(va[i]==-){
			munus(va);
		}
		if(va[i]==/){
			divide(va);
		}
		if(va[i]==*){
			multiplication(va);
		}
	}
	
}
void plus(char va[]){
	int i;
	for(i=0;i<stlen(va);i++){
		if(va[i]=="x"){
			x = var[i]; 
		}
		if(va[i]=="y"){
			y = var[i];
		}
		if(va[i]=="z"){
			z = var[i];
		}
		
	}
	if(va[])
}
void minus(char va[]){
	
}
void divide(char va[]){
	
}
void multiplication(char va[]){
	
}

	
