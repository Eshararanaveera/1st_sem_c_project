#include <stdio.h>
#include <stdlib.h>
int main (){
	int i,n;
	
	printf("enter a number :");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;i++){
		printf("not a prime number 1");
		return 0;
		exit(0);
	}
	printf("prime number!");
}