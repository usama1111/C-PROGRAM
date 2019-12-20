
#include<stdio.h>
void swap(int *x,int *y);
main()
{
	int x,y;
	printf("\nInput two number\n");
	scanf("%d  %d",&x,&y);
	
	swap(&x ,&y);
	
	printf("\nAfter Swapping %d %d", x,y);
	
}

void swap (int *x, int *y)
{
	int temp;
	
	temp = *x;
	*x=*y;
	*y=temp;
}




