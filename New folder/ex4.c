#include <stdio.h>

int main (void){
	float num1,num2,answear;
	
	printf("enter number :");
	scanf("%f",&num1);
	
	printf("enter number :");
	scanf("%f",&num2);
	
	answear = num1 + num2;
	
	printf("answear :%6f",answear);
	
	return 0;
}