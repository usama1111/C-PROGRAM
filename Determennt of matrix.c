
#include<stdio.h>
main(){
	int a;
	int i=0,j=0;
	int l[2][2];
	int m[2][2];
	int n[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter values of array ");
			scanf("%d",&l[i][j]);
			
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d",l[i][j]);
	}
	printf("\n");
}
a=l[0][0]*l[1][1]-l[0][1]*l[1][0];
printf("%d",a);
}
