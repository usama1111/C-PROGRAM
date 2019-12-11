#include<stdio.h>
main(){
	
	int i=0,j=0,a,b,c[100]={};
	
	
printf("enter value to convert to binary \n");
scanf("%d",&a);

while(a>0)
{
	c[i]=a%2;
	a=a/2;
	
	i++;
	}	
	for(j=i-1;j>=0;j--)
	{
		printf("%d",c[j]);
	}
	
	
	
	
}
