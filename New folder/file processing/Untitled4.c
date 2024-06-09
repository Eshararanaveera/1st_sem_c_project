#include <stdio.h>

int main(){
	FILE*cfptr;
	char it[12],n[20];
	int i;
	cfptr=fopen("ayesh.txt","r");
	
	if(cfptr==NULL){
		printf("file not open");
		return -1;
	}
//	fscanf(cfptr,"%s %s %d",it,n,&i);
//	printf("%s %s %d\n",it,n,i);
	
	while(!feof(cfptr)){
			fscanf(cfptr,"%s %s %d",it,n,&i);
	printf("%s %s %d\n",it,n,i);
	}
	fclose(cfptr);
}