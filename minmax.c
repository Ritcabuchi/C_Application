#include<stdio.h>
int main(){
	int i,loop,num[1000],min,max;
	scanf("%d",&loop);
	for(i=1;i<=loop;i++){
		scanf("%d",&num[i]);
	
	}
	for(i=1;i<=loop;i++){
		if(num[i]>max){
			max = num[i];
		}
		if(num[i]<min){
			min = num[i];
		}
	
	}
    printf("%d\n",min);
	printf("%d",max);
	return 0;
}
	
