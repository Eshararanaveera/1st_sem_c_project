#include <stdio.h>
float getanswer(float x,float y);

int main(){
	float num1,num2;
	
	printf("enter number");
	scanf("%f,%f",&num1,&num2);
float w= getanswer(num1,num2);
	printf("%f",w);
}
float getanswer(float x,float y){
	 float z=x+y;
//	return z;
}