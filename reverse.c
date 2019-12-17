#include<stdio.h>
main(){
	
	int a[2][2];
	int i,j;
	
	
	printf("enter array elemets \n");
	for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
	scanf("%d",&a[i][j]);
}
	
	
}
int k,l;
printf("\n");
for( k=1;k>=0;k--)
{
	for( l=1;l>=0;l--)
	{
		printf("%d",a[k][l]);
		printf("\n");
}

}
}
