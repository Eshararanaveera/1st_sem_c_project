#include <stdio.h>

int main (void){
	int age;
	char martialstatus,gender;
	
	printf("enter martial status ,gender,age :");
	scanf("%c,%c,%d",&martialstatus,&gender,&age);
	
	
	if (martialstatus == 'm'){
		printf("you are not marid");
	}
	
	else if(martialstatus == 'u'||martialstatus == 's'){
			if(gender == 'm'){
				if (age >= 21){printf("you are marid");}
			    else{printf("you are not marid");}
			}
			
			else if (gender == 'f'){
				if(age>=18){
					printf("you are marid");}
			else{  printf("you not marid");}
			}
			
		}
		
		
		
	}
	
	getch();
}