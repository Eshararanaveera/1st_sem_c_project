#include<stdio.h> 

void printname(char n[20]);
void print(float weigh,float heigh);
void sum(float x,float y);

int calculatesalary();

int main(){
	
	float a1,a2;
	char name[20];
	printf("\nenter your name :");
	fgets(name,sizeof(name),stdin );
	
	printname(name);
	
	printf("\n---------------------------------------------------------------------------\n");
	float h,w;
	printf("\n\nenter the h,w");
	scanf("%f,%f",&h,&w);
	print(h,w);
	
	printf("\n\nenter the value :");
	scanf("%f,%f",&a1,&a2);
	
	sum(a1,a2);
	
	int bo=calculatesalary();
	
	printf("%d",bo);
	return 0;
}
void printname(char n[20]){
	printf("\n\nyouar name :%s",n);
	
}
void print(float weigh,float heigh){
	printf("\nheigh :%f",weigh);
	printf("\nweigh :%f",heigh);
}

void sum(float x,float y){
	float c=x+y;
	
	printf("sum :%f",c);
}

int calculatesalary(){
	int salary,cal;
	printf("enter the salary :");
	scanf("%d",&cal);
	
	salary=cal+1200;
	return salary;
	
}
