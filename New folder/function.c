 #include <stdio.h>
void printname();
int main(){
	printf("thissa pakka\n");
	printname();
	printf("ayesh");
		return 0;
	
}
void printname()
{
	char name[20];
	printf("enter name =");
	fgets(name, sizeof(name), stdin);
	
	printf("your name is -%s",name);
	
}
