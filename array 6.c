//Write a function, which reads two arrays from the console and checks whether they are
//equal (two arrays are equal when they are of equal length and all of their elements,
//which have the same index, are equal).
#include<stdio.h>

main(){
	
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int arr2[10]={1,2,3,4,5,6,7,8,9,10};
	
	
int i;
for(i=0;i<=10;i++)
if(arr[i] != arr2[i])
{
	printf("not equal");
	printf("\n");
}
	else
	{
		printf("equal");
		printf("\n");
	}


if(arr != arr2)
{
	printf("equal");
	printf("\n");
}
	else
	{
		printf("not equal");
		printf("\n");
	}
}
