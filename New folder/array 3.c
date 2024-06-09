#include <stdio.h>

int main(){
	int mark[2][2];
	int s1total,s2total;
	
	printf("student 1 subject mar (ex 12,23) :");
	scanf("%d,%d",&mark[0][0],&mark[0][1]);
	
	printf("\nstudent 2 sibject mark (ex 34,67)");
	scanf("%d,%d",&mark[1][0],&mark[1][1]);
	
	s1total=mark[0][0]+mark[0][1];
	s2total=mark[1][0]+mark[1][1];
	
	printf("\nstudent 1 total :%d",s1total);
	printf("\nstudent 2 tatal :%d",s2total);
	
	if (s1total>s2total){
		printf("\nu hoday");
	}
}