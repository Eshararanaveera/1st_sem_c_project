#include <stdio.h>

int main(){
	
	int marks[10] = {50,40,60,29,50,60};
	
	int count =0;
	int sum =0;
	
	int size =sizeof(marks)/sizeof(marks[0]);
	
	while(count<size) {
	printf("student %d mark=%d\n",count+1,marks[count]);
	sum = sum+marks[count];
	count++;
	}
	printf("\nsum is -%d ",sum);
	}