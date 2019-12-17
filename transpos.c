
#include<stdio.h>
main(){
	
int a[2][2]={};
int b[2][2]={};

int i,j;

printf("enter array elements \n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		scanf("%d",&a[i][j]);
		
	}
	
	
	
}
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("|_%d_|",a[i][j]);
		
	}
	
	
printf("\n");	
}
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
b[i][j]=a[i][j];

		
	}
	
	
printf("\n");	
}


for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
     
b[j][i]=a[i][j];
	
	}
	
	
	
}
printf("transpose \n \n");

for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
     
printf("|_%d_|",b[i][j]);
	
	}
printf("\n");
}
}









