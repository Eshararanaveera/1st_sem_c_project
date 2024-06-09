#include <stdio.h>

int main (){
	int mark[10]={2,4,6,3,5,1,2,4,1,2};
	int sum=0;
	int count=0;
	int size=sizeof(mark)/sizeof(mark[0]);
	
	
	while(count<size){
		printf("\nstudent %d marks =%d ",count+1,mark[count]);
		
		
		sum=sum+mark[count];
		count++;
	}
	
	printf("sumation =%d",sum);
	
	}