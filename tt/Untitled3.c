#include <stdio.h>

int main (){
	int regi;
	int billamount;
	
	printf("register 1,non register 2 :");
	scanf("%c",&regi);
	
	printf("billamount :");
	scanf("%d",&billamount);
	
	if(regi=='1'){
		if(billamount<=2000 ||billamount==2000 ){
			 float discount=billamount*15.00/100;
			 printf("%.2f\n",discount);
			 float finalbillamount=billamount-discount;
			 printf("%.2f",finalbillamount);
		}
		
		else if(billamount>=2000){
			 float discount=billamount*25.00/100;
			 printf("%.2f\n",discount);
			 float finalbillamount=billamount-discount;
			 printf("%f",finalbillamount);
		}
	}
	
	else if(regi=='2'&&billamount>=3000){
		 float discount=billamount*15.00/100;
		 printf("%.2f\n",discount);
			 float finalbillamount=billamount-discount;
			 printf("%.2f",finalbillamount);
	}
	
	return 0;
}