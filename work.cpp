#include<stdio.h>
main()
{
	int i,j,a;
	int num[5][2];
	for(i=0;i<5;i++){
		for(j=0;j<1;j++){
		printf("please std_id %d:",i+1);
		scanf("%d",&num[i][j]);
		j++;
		printf("please score %d:",i+1);
		scanf("%d",&num[i][j]);
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<2;j++){
		printf("%d ",num[i][j]);
		}
	printf("\n");
	}
}
