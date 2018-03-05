#include<stdio.h>
int main()
{
	int Num,Ans,i, comform;
	printf("Enter your number:");
	scanf("%d",&Num);
	for(i=0;i<100;i++){
		printf("\n");
	}
	printf("You can answer 10 times\n");
	for(i=0;i<10;i++)
	{
		if(i==9){
			printf("You have last one answer\n");
			printf("Enter answer[%d]:",i+1);
	        scanf("%d",&Ans);
	        printf("Please Comform anwer 1/0:");
	        scanf("%d",&comform);
	        if(comform==0)
	        {
	        	printf("Enter answer again:");
	        	scanf("%d",&Ans);
	        	if(Ans<Num){
	    			printf("It is Biger\n");
					}
				else if(Ans>Num){
					printf("It is little\n");
				}
				else if(Ans==Num)
				{
					printf("Your win\n");
				break;
				}
				break;
	        	
			}
			else if(comform==1){
				if(Ans<Num){
	    			printf("It is Biger\n");
					}
				else if(Ans>Num){
					printf("It is little\n");
				}
				else if(Ans==Num)
				{
					printf("Your win\n");
				break;
				}
			}
		}
	    printf("Enter answer[%d]:",i+1);
	    scanf("%d",&Ans);
	    if(Ans<Num){
	    	printf("It is Biger\n");
		}
		else if(Ans>Num){
			printf("It is little\n");
		}
		else if(Ans==Num)
		{
			printf("Your win\n");
			break;
		}
	}
	printf("You Lose");
	
}
