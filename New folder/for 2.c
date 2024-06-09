#include <stdio.h>

int main (){
	int j,i,k;
	
	for (i=0;5>=i;i++){
	for(j=0;j<i;j++){
		printf("  ");
	}
	for(k=5;k>i;k--){
		printf("*  ");
	}
	printf("\n");
	}
}