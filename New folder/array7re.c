#include <stdio.h>
#include <string.h>
int main(){
/*	char word[20];
	int i;
	
	printf("enter the word :");
	scanf("%s", word);
	int size=strlen(word);
		printf("revers word :");
		
	for(i=size-1;i>=0;i--){
		
	printf(" %c",word[i]);
		
	}
	printf("\n");*/
	
	
	char name[20];
	int i;
	
	printf("enter the name ");
	scanf("%s",name);
	
	int size=strlen(name);
	
	for(i=size-1;i>=0;--i){
		printf("%c",name[i]);
	}
}

