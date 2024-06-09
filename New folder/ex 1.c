#include <stdio.h>
int main() {
	
	int age = 20;
	printf("my age is %d\n",age);
	
	char grade = 'A';
	printf("MY grade is %c\n",grade);
	
	float weight = 25.59;
	printf("my weight %0.1f\n",weight);
	
	
	double longitute = 45.7878;
	printf("longitute %if",longitute);
	
	printf("\n\nsize of int : %d",sizeof(age));
	printf("\nsize of int : %d",sizeof(grade));
	printf("\nsize of int : %d",sizeof(weight));
	printf("size of int : %d",sizeof(longitute));
	return 0;
	
}