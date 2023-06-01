#include<stdio.h>
main()
{
	int num[3][3]={ {613901,3,4},
					{613902,1,3},
					{613903,3,4}};
	int cnt[3][3]={613901,3,4,613902,2,3,613903,3,4};
	int i=0,j;
//	for(i=0;i<3;i++){
	while(i<3){

	//	for(j=0;j<3;j++){
		j=0;
		while(j<3){
		
			printf("%d,",num[i][j]);
			j++;
		}
	printf("\n");
	i++;
	}
	return 0;
}
