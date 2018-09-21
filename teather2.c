#include<stdio.h>
#define N 10
int main(){
	int seat[N][N] = {};
	int i,j,k;
	int row,col;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			seat[i][j] = 0;
		}
	}
	do{
		printf("\tPSU Theather\n");
		for(i=0;i<10;i++){
		printf("   %d",i+1);
		}
		printf("\n");
		for(i=0;i<21;i++){
		
		
		
	    	k = i/2;
			if(i%2==0)
				printf("%-2s","");
			else
				printf("%-2d",(i+1)/2);
			for(j=0;j<10;j++){
			if(i%2==0)
					printf("+---");
			else{
				    if(seat[k][j]==1)
						printf("| * ");
					else
						printf("|   ");
				}
		}
		if(i%2==0){
			printf("+\n");
		}
		else
			printf("|\n");
			
			
			
			

		}
		printf("Enter seat [row cols]:");
		scanf("%d %d",&row,&col);
		if(row>N||col>N){
			printf("NO SEAT!!!\n");
		}else if(seat[row-1][col-1]==1){
			printf("RESERVED... please book another seat\n");
		}else{
			seat[row-1][col-1] = 1;
		}
	}
	while(row>0||col>0);
	return 0;
}
