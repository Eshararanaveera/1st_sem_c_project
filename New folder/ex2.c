#include <stdio.h>



int main(void){
 int num1 = 40;
 int num2 = 80;
 float num3 = 23.5;
 float num4 = 34.8;
	
int add1,sub1,multi1,div1,mod1;	
	float add2,sub2,multi2,div2,mod2;
	
	
	//integers
	add1 = num1 + num2;
	sub1 = num2  - num1;
	multi1 = num1 * num2;
	div1 = num2 / num1;
	mod1 = num2 % num1; 
	
	
	printf("-------operation using integers------\n");
	printf("Addition : %d \n",add1);
    printf("Substraction : %d \n",sub1);
    printf("\tMultiplication : %d \n",multi1);
  	printf("Division : %d \n",div1);
  	printf("Modulus : %d \n",mod1);		
  	
//float
	add2 = num3 + num4;
	sub2 = num4 - num3;
	multi2 = num3*num4;
	div2 = num4 / num3;
//	mod2 = num3 % num4;
	
	
  	printf("=============opeerration inteejert\n");
  	printf("addition :%3f\n",add2);	
  	printf("substraction :%f\n",sub2);
  	printf("multiplication :%2f\n",multi2);
  	printf("division :%f\n",div2);
  //	printf("moduls :%f\n",)
  	
  	return 0;
  	
}