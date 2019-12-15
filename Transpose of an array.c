#include<stdio.h>
main(){
	
	int arr1[2][2];
	int arr2[2][2];
	int i,j;
		printf("enter array elements \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		
	
		scanf("%d",&arr1[i][j]);
	}}
	
	for(i=0;i<2;i++)
	{
	
			for(j=0;j<2;j++)
	{
		
		printf("%d",arr1[i][j]);
}
printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			arr2[j][i]=arr1[i][j];
		}
		
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
	     printf("%d",arr2[i][j]);
		}
		printf("\n");
	}
	
}
