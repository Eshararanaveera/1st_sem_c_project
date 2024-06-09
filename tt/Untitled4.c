#include <stdio.h>

int main(){
	
	char id[12],name[20];
	int i;
	double ave;
	FILE*cfptr;
	
	cfptr=fopen("students .txt","w");
	if(cfptr==NULL){
		printf("not creat file");
		return -1;
	}
		fprintf(cfptr,"id  average \n");
		
	for(i=0;i<3;++i){
		printf("student id :");
		scanf("%s",id);
		printf("average :");
		scanf("%lf",&ave);
	
		fprintf(cfptr,"%-2s %.2lf\n",id,ave);
	}
	
	fclose(cfptr);
	
}