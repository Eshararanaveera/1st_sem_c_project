#include <stdio.h>

int main(){
	int myarr[10];
	int count = 0;
	int size = 10;
	
	
	while(count<size){
		printf("enter a number :");
		scanf("%d",&myarr[count]);
		count++;
	}
	count = 0;
	printf("--------------------------------------");
	while(count<size){
		printf("%d\n",myarr[count]);
		count++;
	}
	return 0;
}