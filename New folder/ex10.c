#include <stdio.h>

int main (void){
	char grade;
	
	printf("enter the grade :");
	scanf("%c",&grade);
	
	switch(tolower(grade)){
		
		case 'a':
		printf("well done");
		break;
		
		case 'b':
		printf("thisara");
		break;
		
		case 'c':
		printf("ayesh");
		break;
		
		default :
			printf("jinki tika");
			break;
	}
}