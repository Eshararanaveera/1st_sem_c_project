#include <stdio.h>

int main(){

	FILE *cfptr;
		char id[20],n[10];
	int i;
	cfptr=fopen("eshara.txt","r");
	
	fscanf(cfptr,"%s ",id);
	fscanf(cfptr,"%s",n);
	fscanf(cfptr,"%d",&i);
	printf("%s %s %d",id,n,i);
	
}