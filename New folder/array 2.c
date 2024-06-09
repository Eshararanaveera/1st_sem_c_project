# include <stdio.h>
# define SIZE 12
int  main(void)
{
	int a[ SIZE ] ;
	int i,j;
	int total = 0; // sum of array
	
	for( i = 0; i   < SIZE; ++i)
	{
		printf("\na[ i ] = ");
		scanf("%d", &a[ i ]);      		
                   }
	for( j = 0; j < SIZE; ++j){ 		
	total += a[ j ];
	printf("Total of array elements is %d \n", total); 
	}
    
}
