#include<stdio.h>
func(int arr[5]);
int main(){
	int arr[5];
	int marks[5]={1,2,3,4,5};
	arr[0]=&marks[5];
	int *ptr[1] =&arr[0];
	fucn(arr[5]);
	
	
}
func(int arr[5])
{
	
	printf("%d",*ptr[0]);
	
	
}
