#include <stdio.h>
#include <iostream>

main()
{
	int num[7]={4,5,6,8,10};
	int i,max=0,min=999,avg=0;
	for(i=0 ; i <= 4 ; i++){
		if(min > num[i]){
			min=num[i];
		}
	for(i=0 ; i <= 4 ; i++){
		if(max < num[i])
			max=num[i];
		}
	for(i=0;i<=4;i++){
		avg = avg+num[i];
	}
			
	printf("max = %d",max);
	printf("min = %d",min);
	printf("avg = %d",avg);
}
}
