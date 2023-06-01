#include <stdio.h>

main()
{
	int i,j,k;
	printf("Input Number : ");
	scanf("%d",&i);
	printf("Input Number : ");
	scanf("%d",&j);
	printf("Input Number : ");
	scanf("%d",&k);
	if(i+j+k<=100){
		printf("%d <= 100",i+j+k);
	}else	printf("%d > 100",i+j+k);

	
	
}
