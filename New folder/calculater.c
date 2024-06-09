#include <stdio.h>

int main(void){
	char  cal;
	float num1,num2;
	
	printf("enter the calculation :");
	scanf("%c\n",&cal);
	
	printf("enter num1 :");
	scanf("%f\n",&num1);
	
	printf("enter the num2 :");
	scanf("%f",&num2);
	
	switch(cal){ 
	case 'a':
		printf("%f",num1+num2);
		break;
		case's':
		printf("%f",num1-num2);
		break;
		case'm':
		printf("%f",num1*num2);
		break;
		case'd':
		printf("%f",num1/num2);
		break;
	}
	return 0;
}