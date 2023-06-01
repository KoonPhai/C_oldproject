#include <stdio.h>
main()
{
	int i,j;
	printf("please input number = ");
	scanf("%d",&j);
	for(i=1;i<=3;i++){
		for(j=0;j<=4;j++){
			printf("i=%d:j=%d\n",i,j);
		}
		printf("\n");
	}
}
