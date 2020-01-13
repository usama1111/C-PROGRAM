#include<stdio.h>
main()
{
	int arr[4];
	int i,j;
	int a;
	printf("enter array elelmts \n");
	for(i-0;i<4;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i-0;i<4;i++)
	{
	printf("%d \n",arr[i]);	
	
}
for(i=0;i<3;i++)
{
	{
		for(j=i+1;j<3;j++)
{
	if (arr[i]>arr[j])
	{
		a=arr[i];
		arr[i]=arr[j];
		arr[j]=a;
		
	}
}

	}

	
		for(i=0;i<4;i++)
		{
			printf("%d",arr[i]);
			
		}
	
	
	
	
	
	
	
}
	
	
}
