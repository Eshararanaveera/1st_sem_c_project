#include <stdio.h>

int main(){
	char name[]="eshra ranaveera";
	int size = sizeof(name) / sizeof(name[0]);
	int count=size;
	while(count>=0){
		printf("%c",name[count]);
		count--;
	}
}