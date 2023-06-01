#include<stdio.h>
main() {

	int num[10];
	int i=0,max=0,min=999,avg=0;

	while(i<=7) {
		printf("please input num[%d] :",i);
		scanf("%d",&num[i]);
		i=i+1;
	}
	i=0;
	do {
		printf("%d ",num[i]);
		if(num[i] > max) {
			max=num[i];
		}
		if(num[i] < min) {
			min=num[i];
		}
		avg = avg + num[i];
		i=i+1;

	} while(i<=7);
	printf("max=%d \n",max);
	printf("min=%d \n",min);
	printf("avg=%d",avg/8);
}
