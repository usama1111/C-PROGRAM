
#include<stdio.h>
main()
{
	int arr[25]={};
	printf("enter 25 numbers \n");
	int i,j,count=0;
	for(i=0;i<25;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("type a number to check how many time is typed by user \n");
	scanf("%d",&j);
	for(i=0;i<25;i++)
	{
	if(arr[i]==j)
	{
		count++;
		 } 	
		
	}
	
printf("the count of number typed by a user is %d",count);	
	
}
