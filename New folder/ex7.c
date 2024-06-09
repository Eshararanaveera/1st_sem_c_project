#include <stdio.h>

int main(void){
	int math,sci,his,total,average;
	
	printf("\nmath mark :");
	scanf("%d",&math);
	
	printf("\nsci mark :");
	scanf("%d",&sci);
	
	printf("\nhis mark :");
	scanf("%d",&his);
	
int	total = math +sci +his ;
	average = total/3;
	
	printf ("\n total mark :%d \n average mark :%3f",total,average);
	
	return 0;
}