#include <stdio.h>

int main(void){
	const float PI = 3.14;
	float r,area;
	
	printf("enter the radios :");
	scanf("%f",&r);
	
	area = PI*r*r;
	printf("area = %4f",area);
	
	return 0;
}