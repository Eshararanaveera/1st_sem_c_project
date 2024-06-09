#include <stdio.h>

int main(){
	int i,n,ui;
	int sum=0;
	
	printf("how many enter the number");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("enter the numbeer ");
		scanf("%d",&ui);
		
		sum=sum+ui;
	
	}	printf("\n ekathuwa %d",sum);
}