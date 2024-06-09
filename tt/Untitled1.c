#include <stdio.h>


int main(){
	int months;
	float  basicsalary,bonus;
	
	printf("basicsalary :");
	scanf("%f",&basicsalary);
	
//	printf("\nbonus :");
//	scanf("%f",&bonus);
	
	printf("month :");
	scanf("%d",&months);
	
	if (months>=6){
	
		bonus=months*basicsalary;
		printf("bonus :%.2f",bonus);}
		
	else if(months==12&&45000>=basicsalary){
			
		bonus=months*basicsalary+20000;
		printf("bonus : %f",bonus);}
		
	
	
	else if (months<=6){
		printf("bonus :00.00");
		
	}
	
	return 0;
}