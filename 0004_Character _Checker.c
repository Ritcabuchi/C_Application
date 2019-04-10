#include<stdio.h>
#include<string.h>
int main(){
	char str[10000];
	int i,len,chk_small=0,chk_big=0;
	scanf("%s",str);
	len = strlen(str);
	for(i=0;i<len;i++){
		if(str[i]>=97&&str[i]<=122){
			chk_small = 1;
		}
		else if(str[i]>=65&&str[i]<=90){
			chk_big = 1;
		}
	}
	if(chk_small==1&&chk_big==1){
		printf("Mix");
	}
	else if(chk_small==0&&chk_big==1){
		printf("All Capital Letter");
	}
	else if(chk_small==1&&chk_big==0){
		printf("All Small Letter");
	}
	return 0;
}
