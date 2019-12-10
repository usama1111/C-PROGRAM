
#include<stdio.h>
func();
main(){
	
	func();
	
}
func(){
	int arr[20]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int i,j;
	for(i=0;i<=20;i++)
	{
		j=arr[i]*5;
		
		printf("%d",j);
	//	printf("\n");
	}
	
}
