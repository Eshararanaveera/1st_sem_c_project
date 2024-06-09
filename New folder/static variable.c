#include <stdio.h>

void er(){
	int a=1;
	static int b=100;
	
	printf("%d\n",a);
	printf("%d\n",b);
	
	a++;
	b++;
}

int main(){
er();
er();
er();

return 0;
}