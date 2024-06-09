#include <stdio.h>

int main(){
	int mark[3][3];
	int count1=0;
	int count2=0;
	int ui;
	int sum=0;
	float ave=0;
	
	while(count1<3){
		sum=0;
		ave=0;
		count2=0;
		while(count2<3){
			printf("subject %d student %d :",count1+1,count2+1);
			scanf("%d",&ui);
		//	mark[count1][count2]=ui;
			
			count2++;
		}
		   count1++;
	}
}